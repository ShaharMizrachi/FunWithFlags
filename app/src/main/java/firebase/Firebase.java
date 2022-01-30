package firebase;


import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.FutureTask;

import Http.Http;
import models.Flag;
import models.FlagsCallable;
import models.RegisterCallable;
import models.ScoreCallable;
import models.ScoreUser;
import models.User;

public class Firebase {

    public static String url = "https://funwithflags-82a9a-default-rtdb.firebaseio.com/";

    public static String getUrl(String path) {
        return url + path + ".json";
    }

        public static void PostNewUser(String userName,String email, String password) {
            Http http = new Http();
            http.createUser(getUrl("users"),userName,email,password);
    }

    public static void PostUserScore(User user,int score) {
        Http http = new Http();
        http.createScoreUser(getUrl("score"),user,score);
    }




    public static ArrayList<User> getAllUsers() {
        FutureTask[] task = new FutureTask[1];
        Callable callable = new RegisterCallable();
        task[0] = new FutureTask(callable);
        Thread thread = new Thread(task[0]);
        thread.start();
        try {
            return (ArrayList<User>) task[0].get();
        } catch (ExecutionException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        return null;
    }

    public static ArrayList<ArrayList<Flag>> getAllFlags(){
        FutureTask[] task = new FutureTask[1];
        Callable callable = new FlagsCallable();
        task[0] = new FutureTask(callable);
        Thread thread = new Thread(task[0]);
        thread.start();
        try {
            return (ArrayList<ArrayList<Flag>>) task[0].get();
        } catch (ExecutionException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        return null;
    }

    public static ArrayList<ScoreUser> getUsersScore(){
        FutureTask[] task = new FutureTask[1];
        Callable callable = new ScoreCallable();
        task[0] = new FutureTask(callable);
        Thread thread = new Thread(task[0]);
        thread.start();
        try {
            return (ArrayList<ScoreUser>) task[0].get();
        } catch (ExecutionException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        return null;
    }



}
