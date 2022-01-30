package com.example.funwithflags;

import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

import firebase.Firebase;
import models.ScoreUser;
import models.User;

public class ScoreList extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.scorelist);

        User user = (User) getIntent().getSerializableExtra("user");
        ListView list = (ListView) findViewById(R.id.theList);


        ArrayList<ScoreUser> usersScore = Firebase.getUsersScore();
        Collections.sort(usersScore, new Comparator<ScoreUser>() {
            @Override public int compare(ScoreUser p1, ScoreUser p2) {
                return p2.getScore() - p1.getScore();
            }
        });

        int rate=0;
        ArrayList<String> details = new ArrayList<>();
        for(ScoreUser s: usersScore) {
            details.add((rate+=1) + ". " + s.getEmail() + " | " + s.getUserName() + " | " + s.getScore());
        }
        ArrayAdapter adapter = new ArrayAdapter(this, R.layout.listitem, details);
        list.setAdapter(adapter);


        findViewById(R.id.btn_score_to_menu).setOnClickListener(btn->{
            Intent firstIntent = new Intent(this,Menu.class);
            firstIntent.putExtra("user",user);
            startActivity(firstIntent);
        });


        if(MainActivity.languageFlag==1) translate_score("he");
        else translate_score("en");


    }

    //language changer
    public void translate_score(String lang)
    {
        Context context;
        Resources resources;
        context = LocaleHelper.setLocale(this, lang);
        resources = context.getResources();
        ((Button)findViewById(R.id.btn_score_to_menu)).setText(resources.getText(R.string.tomenu_txt));
        ((TextView)findViewById(R.id.score_title)).setText(resources.getText(R.string.score_title));




    }
}
