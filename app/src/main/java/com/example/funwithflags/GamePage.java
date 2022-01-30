package com.example.funwithflags;

import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.BitmapFactory;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import com.airbnb.lottie.LottieAnimationView;

import org.w3c.dom.Text;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Locale;
import java.util.Timer;
import java.util.TimerTask;
import java.util.stream.Collectors;

import models.Flag;
import models.Game;
import models.Question;
import models.User;

public class GamePage extends AppCompatActivity {
    ArrayList<Flag> flags;
    Game game;
    CountDownTimer timer;
    ImageView[] hearts;
    Button[] btns;
    User user;
    Flag currentCorrectQuestion;


    protected void onCreate(Bundle savedInstanceState) {

        flags = (ArrayList<Flag>) getIntent().getSerializableExtra("flags");
        game = new Game(getIntent().getIntExtra("level", 1));

        user = (User) getIntent().getSerializableExtra("user");
        Integer level = (Integer) getIntent().getSerializableExtra("level");

        super.onCreate(savedInstanceState);
        setContentView(R.layout.game_page);


        btns = new Button[]{(Button) findViewById(R.id.btn_answer1), (Button) findViewById(R.id.btn_answer2), (Button) findViewById(R.id.btn_answer3), (Button) findViewById(R.id.btn_answer4)};
        hearts = new ImageView[]{(ImageView) findViewById(R.id.heart_1), (ImageView) findViewById(R.id.heart_2), (ImageView) findViewById(R.id.heart_3)};

        for (Button btn : btns) {
            btn.setOnClickListener(view -> {
                handleAnswer(btn);
            });
        }
        generateNewQuestion();


        //language changer
        if (MainActivity.languageFlag == 1) translate_game("he");
        else translate_game("en");

    }


    //language changer
    public void translate_game(String lang) {
        Context context;
        Resources resources;
        context = LocaleHelper.setLocale(this, lang);
        resources = context.getResources();
        ((TextView) findViewById(R.id.timeLeft)).setText(resources.getText(R.string.timeLeft_txt));

    }


    private void handleAnswer(Button btn) {
        boolean isCorrect = ((Flag)btn.getTag()).getName().equals(this.currentCorrectQuestion.name);
        if ((isCorrect && this.game.currectAnswers + 1 == 20) || (!isCorrect && this.game.heart - 1 == 0)) {
            if (isCorrect) this.game.currectAnswers++;
            handleEndOfGame();
            return;
        }
        if (isCorrect) {
            this.game.currectAnswers++;
            generateNewQuestion();
        } else {
            this.game.heart--;
            this.hearts[this.game.heart].setVisibility(View.INVISIBLE);
            btn.setEnabled(false);
            btn.setVisibility(View.INVISIBLE);
        }
    }

    private void handleEndOfGame() {
        Intent firstIntent = new Intent(this, SummaryScreen.class);
        firstIntent.putExtra("user", user);
        firstIntent.putExtra("game", game);
        startActivity(firstIntent);
        timer.cancel();
    }

    private void generateNewQuestion() {
        ((TextView) findViewById(R.id.currentAnswers)).setText(this.game.currectAnswers + "/20");
        Question question = Question.generateQuestion(flags);
        currentCorrectQuestion = question.correctOption;
        flags = (ArrayList<Flag>) flags.stream().filter(flag -> flag.id != question.correctOption.id).collect(Collectors.toList());
        int id = getResources().getIdentifier(question.correctOption.name.replaceAll("(\\s|-)", "").toLowerCase(Locale.ROOT), "drawable", getPackageName());
        ((ImageView) findViewById(R.id.pick_flag)).setImageResource(id);
        for (int i = 0; i < 4; i++) {
            btns[i].setText(getName(question.options.get(i).name.replaceAll("(\\s|-)", "")));
            btns[i].setEnabled(true);
            btns[i].setTag(question.options.get(i));
            btns[i].setVisibility(View.VISIBLE);
        }
        resetTimer();
    }

    private void resetTimer() {
        if (timer != null) {
            timer.cancel();
        }
        timer = new CountDownTimer(10000, 1000) {
            @Override
            public void onTick(long l) {
                game.totalTime += 1;
                ((TextView) findViewById(R.id.time_txt)).setText(String.valueOf(l / 1000));
            }

            @Override
            public void onFinish() {
                handleEndOfGame();
            }
        }.start();
    }

    private String getName(String name) {
        Context context = LocaleHelper.setLocale(this, MainActivity.languageFlag == 1 ? "he" : "en");
        Resources resources = context.getResources();
        String packageName = getPackageName();
        int resId = getResources().getIdentifier(name, "string", packageName);
        return (String) resources.getText(resId);
    }

}
