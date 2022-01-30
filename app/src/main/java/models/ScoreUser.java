package models;

public class ScoreUser {
    String userName;
    String email;
    int score;

    public ScoreUser(String userName, String email, int score) {
        this.userName = userName;
        this.email = email;
        this.score = score;
    }

    public String getUserName() {
        return userName;
    }

    public String getEmail() {
        return email;
    }

    public int getScore() {
        return score;
    }


}
