package models;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Random;

public class Question {
    public Flag correctOption;
    public List<Flag> options;

        // options=    //generate 4 flags randomly
        // correctOption =   //random index


    public Question(ArrayList<Flag> options) {
        this.correctOption = options.get(new Random().nextInt(4));
        this.options = options;
    }

    public static Question generateQuestion(ArrayList<Flag> flags) {
       Collections.shuffle(flags);
       Question question = new Question(new ArrayList<>(flags.subList(0,4)));
       return question;
    }





}
