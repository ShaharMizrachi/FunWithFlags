package models;

import java.util.ArrayList;
import java.util.concurrent.Callable;

import Http.Http;
import firebase.Firebase;

public class ScoreCallable implements Callable {
    @Override
        public ArrayList<ScoreUser> call() throws Exception {
        Http http = new Http();
        return http.getScore(Firebase.getUrl("score"));
    }
}
