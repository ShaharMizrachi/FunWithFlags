package com.example.funwithflags;

import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.Handler;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import com.airbnb.lottie.LottieAnimationView;
import com.airbnb.lottie.LottieDrawable;

import java.text.SimpleDateFormat;
import java.util.Calendar;

import firebase.Firebase;
import models.Game;
import models.User;

public class SummaryScreen extends AppCompatActivity {


    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.summary_screen);

        LottieAnimationView animation;

        User user = (User) getIntent().getSerializableExtra("user");
        Game game = (Game) getIntent().getSerializableExtra("game");


        // using animation - Lottie
        animation=(LottieAnimationView)findViewById(R.id.animation_txt);
        if(game.currectAnswers>=15) animation.setAnimationFromUrl("https://assets2.lottiefiles.com/packages/lf20_lxededya.json");
        else if(game.currectAnswers>=5) animation.setAnimationFromUrl("https://assets9.lottiefiles.com/packages/lf20_3hztdoha.json");
        else animation.setAnimationFromUrl("https://assets6.lottiefiles.com/private_files/lf30_uDAsLk.json");
        animation.animate().setDuration(6000);

        double score= (((double)(game.level*game.currectAnswers)/(double)game.totalTime))*100+game.heart;
        ((TextView)findViewById(R.id.summery_name_result)).setText(user.getName());
        ((TextView)findViewById(R.id.summery_level_result)).setText(String.valueOf(game.level));
        ((TextView)findViewById(R.id.summery_score_result)).setText(String.valueOf((int)score));
        ((TextView)findViewById(R.id.summery_time_result)).setText(String.valueOf(game.totalTime));


        //and passing all information to firebase table
        new Thread(() -> Firebase.PostUserScore(user,(int)score)).start();

        findViewById(R.id.to_menu_btn).setOnClickListener(btn->{
            //back to menu
            Intent firstIntent = new Intent(this, Menu.class);
            firstIntent.putExtra("user",user);
            startActivity(firstIntent);
        });

        //language changer
        if(MainActivity.languageFlag==1) translate_summary("he");
        else translate_summary("en");

    }

    //language changer
    public void translate_summary(String lang)
    {
        Context context;
        Resources resources;
        context = LocaleHelper.setLocale(this, lang);
        resources = context.getResources();
        ((TextView)findViewById(R.id.summery_name)).setText(resources.getText(R.string.name));
        ((TextView)findViewById(R.id.summery_level)).setText(resources.getText(R.string.level));
        ((TextView)findViewById(R.id.summery_score)).setText(resources.getText(R.string.score));
        ((TextView)findViewById(R.id.summery_time)).setText(resources.getText(R.string.time));
        ((Button)findViewById(R.id.to_menu_btn)).setText(resources.getText(R.string.tomenu_txt));
    }

}
