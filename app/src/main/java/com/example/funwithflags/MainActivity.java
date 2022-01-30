package com.example.funwithflags;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.os.Bundle;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.Locale;

import firebase.Firebase;
import models.User;

public class MainActivity extends AppCompatActivity {

    public static SharedPreferences mPrefs;
    public static final String prefs_name="PrefsFile";
    Context context;
    Resources resources;
    public static int languageFlag=0;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mPrefs=getSharedPreferences(prefs_name,MODE_PRIVATE);
        getPreferencesData(); // remember function checking is user in memory

        findViewById(R.id.btnlogin).setOnClickListener(view -> {
            CheckBox checkBoxRemember=(CheckBox)findViewById(R.id.checkBoxRememberMe);
            String email = ((EditText) findViewById(R.id.mail_txt)).getText().toString().toLowerCase(Locale.ROOT);
            System.out.println(email);
            String password = ((EditText) findViewById(R.id.pass_txt)).getText().toString();
            if ((!email.equals("")) && (!password.equals(""))) {
                ArrayList<User> allUsers = Firebase.getAllUsers();
                for (User user : allUsers) {
                    if ((user.getEmail()).equals(email)) {
                        if ((user.getPassword()).equals(password)){
                            //remember user if checkbox is sign ;
                            if (checkBoxRemember.isChecked()){
                                // if "remember me btn checked - we fill automatically the fields
                                Boolean boolIsChecked=checkBoxRemember.isChecked();
                                SharedPreferences.Editor editor=mPrefs.edit();
                                editor.putString("pref_email",user.getEmail());
                                editor.putString("pref_pass",user.getPassword());
                                editor.putString("pref_name",user.getName());
                                editor.putBoolean("pref_check",boolIsChecked);
                                editor.apply();
                            }
                            else mPrefs.edit().clear().apply();
                            // moving to menu screen
                            Intent firstIntent = new Intent(this,Menu.class);
                            firstIntent.putExtra("user", user);
                            startActivity(firstIntent);
                            Toast.makeText(this.getBaseContext(), "login successfully", Toast.LENGTH_LONG).show();
                            return;
                        }
                        else {
                            Toast.makeText(this.getBaseContext(), "Wrong password please try again", Toast.LENGTH_LONG).show();
                            return;
                        }
                    }
                }
                Toast.makeText(this.getBaseContext(), "Email does not exist please register to FUnWithFlags", Toast.LENGTH_LONG).show();
            }
        });

//        moving to register screen
        findViewById(R.id.create_account_btn).setOnClickListener(view -> {
            Intent firstIntent = new Intent(this,Register.class);
            startActivity(firstIntent);
        });

        //radio language changing
        if(languageFlag == 0) ((RadioGroup)findViewById(R.id.radioGroup)).check( R.id.radio_english);
        else {
            ((RadioGroup) findViewById(R.id.radioGroup)).check(R.id.radio_hebrew);
            translationLogIn("he");
        }

        ((RadioGroup)findViewById(R.id.radioGroup)).setOnCheckedChangeListener((group, checkedId) -> {
            RadioButton rb = (RadioButton) group.findViewById(checkedId);
            if (rb!=null){
                switch(checkedId) {
                    case R.id.radio_english:
                        translationLogIn("en");
                        languageFlag=0;
                        break;

                    case R.id.radio_hebrew:
                        translationLogIn("he");
                        languageFlag=1;
                        break;
                }

            }
        });
    }


//checking if the user is already  in the memory of the device
    private void getPreferencesData() {
        SharedPreferences sp = getSharedPreferences(prefs_name, MODE_PRIVATE);
        if (sp.contains("pref_name") && sp.contains("pref_pass") && sp.contains("pref_check")) {
            String email = sp.getString("pref_email", "not found");
            String name = sp.getString("pref_name", "not found");
            String password = sp.getString("pref_pass", "not found");
            Boolean checking = sp.getBoolean("pref_check", false);
            ((EditText) findViewById(R.id.mail_txt)).setText(email);
            ((EditText) findViewById(R.id.pass_txt)).setText(password);
            ((CheckBox) findViewById(R.id.checkBoxRememberMe)).setChecked(checking);
            Intent firstIntent = new Intent(this,Menu.class);
            User user=new User(email,name,password);
            firstIntent.putExtra("user", user);
            startActivity(firstIntent);
        }


    }
    //language changer
    public void translationLogIn (String lang){
        context = LocaleHelper.setLocale(this, lang);
        resources = context.getResources();
        ((RadioButton)findViewById(R.id.radio_english)).setText(resources.getText(R.string.english_rd_txt));
        ((RadioButton)findViewById(R.id.radio_hebrew)).setText(resources.getText(R.string.hebrew_rd_txt));
        //((TextView)findViewById(R.id.blessing)).setText(resources.getText(R.string.blessing_txt));
        ((Button)findViewById(R.id.create_account_btn)).setText(resources.getText(R.string.create_Account));
        ((Button)findViewById(R.id.btnlogin)).setText(resources.getText(R.string.Login_btn_txt));
        ((CheckBox)findViewById(R.id.checkBoxRememberMe)).setText(resources.getText(R.string.rememberMe_txt));
        ((EditText)findViewById(R.id.pass_txt)).setHint(resources.getText(R.string.password_txt));
        ((EditText)findViewById(R.id.mail_txt)).setHint(resources.getText(R.string.email_txt));

    }






}
