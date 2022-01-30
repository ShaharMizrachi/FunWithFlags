package com.example.funwithflags;

import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import java.util.ArrayList;
import java.util.Locale;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.FutureTask;

import firebase.Firebase;
import models.User;

public class Register extends AppCompatActivity  {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.register);
        Intent intentFromMain = getIntent();

        //register page
        findViewById(R.id.btn_register).setOnClickListener(view -> {

            String email = ((EditText) findViewById(R.id.email)).getText().toString().toLowerCase(Locale.ROOT);
            String userName = ((EditText) findViewById(R.id.userName)).getText().toString().toLowerCase(Locale.ROOT);
            String password = ((EditText) findViewById(R.id.mypass)).getText().toString();
            if ((!email.equals("")) && (!userName.equals("")) && (!password.equals(""))) {
                ArrayList<User> allUsers = Firebase.getAllUsers();
                for (User user: allUsers){
                    if((user.getEmail()).equals(email)) {
                        Toast.makeText(this.getBaseContext(), "Email already taken, try again", Toast.LENGTH_LONG).show();
                        return;
                    }
                }
                new Thread(() -> Firebase.PostNewUser(userName, email, password)).start();

                Intent firstIntent = new Intent(this,Menu.class);
                firstIntent.putExtra("user",new User(email,userName,password));
                startActivity(firstIntent);

                Toast.makeText(this.getBaseContext(), "Register successfully", Toast.LENGTH_LONG).show();
                return;
            } else {
                Toast.makeText(this.getBaseContext(), "Please fill all the fields", Toast.LENGTH_LONG).show();

            }
        });


        if(MainActivity.languageFlag==1) translate_register("he");
        else translate_register("en");


    }


    //language changer
    public void translate_register(String lang)
    {
        Context context;
        Resources resources;
        context = LocaleHelper.setLocale(this, lang);
        resources = context.getResources();
        ((Button)findViewById(R.id.btn_register)).setText(resources.getText(R.string.register_txt));
        ((EditText)findViewById(R.id.userName)).setHint(resources.getText(R.string.user_txt));
        ((EditText)findViewById(R.id.email)).setHint(resources.getText(R.string.email_txt));
        ((EditText)findViewById(R.id.mypass)).setHint(resources.getText(R.string.password_txt));

    }



}

