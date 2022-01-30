package models;

import java.io.Serializable;

public class Game implements Serializable {
    private static final long serialVersionUID = 3L;
    public int level,currectAnswers,totalTime,heart;

    public Game(int level) {
        this.level = level;
        this.totalTime = 0;
        this.currectAnswers = 0;
        this.heart = 3;
    }
}
