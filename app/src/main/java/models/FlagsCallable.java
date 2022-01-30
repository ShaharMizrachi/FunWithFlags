package models;

import java.util.ArrayList;
import java.util.concurrent.Callable;

import Http.Http;
import firebase.Firebase;

public class FlagsCallable implements Callable {


    @Override
    public ArrayList<ArrayList<Flag>> call() throws Exception {
        Http http = new Http();
        return http.getFlags(Firebase.getUrl("flags"));
    }
}
