package models;

import java.util.ArrayList;
import java.util.concurrent.Callable;

import Http.Http;
import firebase.Firebase;

public class RegisterCallable implements Callable {
    @Override
    public ArrayList<User> call() throws Exception {
        Http http = new Http();
        return http.<User>getUsers(Firebase.getUrl("users"));
    }
}
