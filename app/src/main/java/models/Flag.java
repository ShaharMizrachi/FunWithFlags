package models;

import java.io.Serializable;

public class Flag implements Serializable {
    private static final long serialVersionUID = 1L;
    public int id,Level;
    public String img,name;

    public Flag(int id, int Level,String img, String name) {
        this.id = id;
        this.Level = Level;
        this.img = img;
        this.name = name;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setLevel(int level) {
        Level = level;
    }

    public void setImg(String img) {
        this.img = img;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getId() {
        return id;
    }

    public int getLevel() {
        return Level;
    }

    public String getImg() {
        return img;
    }

    public String getName() {
        return name;
    }

}
