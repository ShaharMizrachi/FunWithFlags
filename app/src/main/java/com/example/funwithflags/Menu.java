package com.example.funwithflags;

import static com.example.funwithflags.MainActivity.mPrefs;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.os.Bundle;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;

import java.lang.reflect.Type;
import java.util.ArrayList;

import firebase.Firebase;
import models.Flag;
import models.Game;
import models.User;

public class Menu extends AppCompatActivity {

    User user;
    public static int music_flag=0;



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.menu);
        Intent music = new Intent(this, BackgroundSoundService.class);
        user = (User) getIntent().getSerializableExtra("user");
        ((TextView)findViewById(R.id.user)).setText(user.getName());
        ArrayList<ArrayList<Flag>> levels;
        levels = fetchAllLevels();



        findViewById(R.id.level1_btn).setOnClickListener(view-> {
                intent(1,0,user,levels);
            }
        );

        findViewById(R.id.level2_btn).setOnClickListener(view-> {
                intent(2,1,user,levels);
            }
        );

        findViewById(R.id.level3_btn).setOnClickListener(view->{
                intent(3,2,user,levels);
            }
        );

        findViewById(R.id.logout_btn).setOnClickListener(btn->{

            SharedPreferences.Editor editor=mPrefs.edit();
            editor.remove("pref_email");
            editor.remove("pref_pass");
            editor.remove("pref_name");
            editor.apply();
            editor.commit();




            Intent firstIntent = new Intent(this, MainActivity.class);
            music_flag=0;
            startActivity(firstIntent);
            stopService(music);
            Toast.makeText(this.getBaseContext(), "Logout successfully", Toast.LENGTH_LONG).show();
        });

        findViewById(R.id.score_btn).setOnClickListener(btn->{
            Intent scoreTable = new Intent(this, ScoreList.class);
            scoreTable.putExtra("user", user);
            startActivity(scoreTable);
        });

        // Switch widget - on or off
        if(music_flag ==1) ((Switch)findViewById(R.id.switch_music)).setChecked(true);
        else ((Switch)findViewById(R.id.switch_music)).setChecked(false);
        ((Switch)findViewById(R.id.switch_music)).setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked) {
                music_flag=1;
                startService(music);
            }
            else{
                music_flag=0;
                stopService(music);
            }
        });


        //language changer
        if(MainActivity.languageFlag==1) translate_menu("he");
        else translate_menu("en");


    }


    // Get all information of flags from firebase to storage once
    private ArrayList<ArrayList<Flag>> fetchAllLevels() {
        SharedPreferences pref = this.getPreferences(MODE_PRIVATE);
        SharedPreferences.Editor prefsEditor = pref.edit();

        Gson gson = new Gson();
        String json = pref.getString("levels", "");
        Type listType = new TypeToken<ArrayList<ArrayList<Flag>>>(){}.getType();
        ArrayList<ArrayList<Flag>> levels = gson.fromJson(json, listType);
        if (levels == null) {
            levels = Firebase.getAllFlags();
            json = gson.toJson(levels); // myObject - instance of MyObject
            prefsEditor.putString("levels", json);
            prefsEditor.commit();
        }
        return levels;
    }


    public void intent (int levelNum,int flagLevel, User user, ArrayList<ArrayList<Flag>> levels){
        Intent firstIntent = new Intent(this, GamePage.class);
        firstIntent.putExtra("flags", levels.get(flagLevel));
        firstIntent.putExtra("level", levelNum);
        firstIntent.putExtra("user", user);
        startActivity(firstIntent);



    }


    //language changer
    public void translate_menu(String lang)
    {
        Context context;
        Resources resources;
        context = LocaleHelper.setLocale(this, lang);
        resources = context.getResources();
        ((Button)findViewById(R.id.level1_btn)).setText(resources.getText(R.string.Easy_txt));
        ((Button)findViewById(R.id.level2_btn)).setText(resources.getText(R.string.Medium_txt));
        ((Button)findViewById(R.id.level3_btn)).setText(resources.getText(R.string.Hard_txt));
        ((Switch)findViewById(R.id.switch_music)).setText(resources.getText(R.string.music_txt));
        ((Button)findViewById(R.id.score_btn)).setText(resources.getText(R.string.scoreTable_txt));
        ((Button)findViewById(R.id.logout_btn)).setText(resources.getText(R.string.Logout_btn_txt));
        ((TextView)findViewById(R.id.blessing)).setText(resources.getText(R.string.blessing_txt));

    }

}