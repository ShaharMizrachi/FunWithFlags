package Http;


import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;

import org.apache.hc.client5.http.classic.HttpClient;
import org.apache.hc.client5.http.classic.methods.HttpGet;
import org.apache.hc.client5.http.classic.methods.HttpPost;
import org.apache.hc.client5.http.impl.classic.HttpClients;
import org.apache.hc.core5.http.ClassicHttpResponse;
import org.apache.hc.core5.http.io.entity.EntityUtils;
import org.apache.hc.core5.http.io.entity.StringEntity;
import org.json.JSONObject;
import org.json.JSONTokener;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

import models.Flag;
import models.ScoreUser;
import models.User;

public class Http {
//Post
    public void createUser(String url,String userName, String email, String password) {
        HttpClient httpclient = HttpClients.createDefault();
        HttpPost httppost = new HttpPost(url);

        httppost.addHeader("Content-Type","application/json; charset=utf-8");
        httppost.addHeader("Access-Control-Allow-Origin","*");
        httppost.addHeader("Accept","application/json");

// Request parameters and other properties.
        HashMap<String,String> params = new HashMap();
        params.put("userName", userName);
        params.put("email", email);
        params.put("password", password);
        StringEntity requestEntity = new StringEntity(new JSONObject(params).toString());
        httppost.setEntity(requestEntity);

//Execute and get the response.
        try {
            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httppost);
            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");
        } catch (Exception e) {

        }
    }



    public ArrayList<User> getUsers(String url) {
        HttpClient httpclient = HttpClients.createDefault();
        HttpGet httpGet = new HttpGet(url);
        httpGet.addHeader("Content-Type","application/json; charset=utf-8");
        httpGet.addHeader("Access-Control-Allow-Origin","*");
        httpGet.addHeader("Accept","application/json");
        try {
            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httpGet);
            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");
            JSONObject json = new JSONObject(responseString); //string of the json
            Iterator<String> keys = json.keys();
            ArrayList<User> allUsers= new ArrayList<>();
            while(keys.hasNext()) {
                String key = keys.next();

                if (json.get(key) instanceof JSONObject) {
                   String email= ((JSONObject) json.get(key)).getString("email");
                   String userName= ((JSONObject) json.get(key)).getString("userName");
                    String password= ((JSONObject) json.get(key)).getString("password");
                    User user= new User(email,userName,password);
                    System.out.println(user.toString());
                    allUsers.add(user);
                }
            }
            return allUsers;
        } catch (Exception e) {


        }
        return null;
    }

    public ArrayList<ArrayList<Flag>> getFlags(String url) {
        HttpClient httpclient = HttpClients.createDefault();
        HttpGet httpGet = new HttpGet(url);
        httpGet.addHeader("Content-Type","application/json; charset=utf-8");
        httpGet.addHeader("Access-Control-Allow-Origin","*");
        httpGet.addHeader("Accept","application/json");
        try {
            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httpGet);
            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");
            Type listType = new TypeToken<ArrayList<ArrayList<Flag>>>(){}.getType();
            ArrayList<ArrayList<Flag>> list = new Gson().fromJson(responseString,listType);
            for(ArrayList<Flag> level : list)
                for(Flag flag : level) flag.setImg(flag.getName() + ".png");
            return list;
        } catch (Exception e) {
             e.getMessage();
        }
        return null;
    }


    //Post
    public void createScoreUser(String url,User user, int  score) {
        HttpClient httpclient = HttpClients.createDefault();
        HttpPost httppost = new HttpPost(url);

        httppost.addHeader("Content-Type","application/json; charset=utf-8");
        httppost.addHeader("Access-Control-Allow-Origin","*");
        httppost.addHeader("Accept","application/json");
        String scores=String.valueOf(score);
// Request parameters and other properties.
        HashMap<String,String> params = new HashMap();
        params.put("userName", user.getName());
        params.put("email", user.getEmail());
        params.put("score", scores);
        StringEntity requestEntity = new StringEntity(new JSONObject(params).toString());
        httppost.setEntity(requestEntity);
//Execute and get the response.
        try {
            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httppost);
            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");

        } catch (Exception e) {

        }
    }


    public ArrayList<ScoreUser> getScore(String url) {
        HttpClient httpclient = HttpClients.createDefault();
        HttpGet httpGet = new HttpGet(url);
        httpGet.addHeader("Content-Type","application/json; charset=utf-8");
        httpGet.addHeader("Access-Control-Allow-Origin","*");
        httpGet.addHeader("Accept","application/json");
        try {
            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httpGet);
            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");
            JSONObject json = new JSONObject(responseString); //string of the json
            Iterator<String> keys = json.keys();
            ArrayList<ScoreUser> usersScore= new ArrayList<>();
            while(keys.hasNext()) {
                String key = keys.next();
                if (json.get(key) instanceof JSONObject) {
                    String email= ((JSONObject) json.get(key)).getString("email");
                    String userName= ((JSONObject) json.get(key)).getString("userName");
                    int score= Integer.parseInt(((JSONObject) json.get(key)).getString("score"));
                    ScoreUser scoreUser = new ScoreUser(userName,email,score);
                    usersScore.add(scoreUser);
                }
            }
            return usersScore;
        } catch (Exception e) {

        }
        return null;
    }









}
