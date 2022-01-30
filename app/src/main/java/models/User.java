package models;

import java.io.Serializable;

public class User implements Serializable {
    private static final long serialVersionUID = 2L;
    String email,userName,password;


    public void setEmail(String email) {
        this.email = email;
    }

    public void setName(String name) {
        this.userName = name;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public User(String email, String userName, String password) {
        this.email = email;
        this.userName = userName;
        this.password = password;
    }

    @Override
    public String toString() {
        return "User{" +
                "email='" + email + '\'' +
                ", userName='" + userName + '\'' +
                ", password='" + password + '\'' +
                '}';
    }

    public String getEmail() {
        return email;
    }


    public String getName() {
        return userName;
    }

    public String getPassword() {
        return password;
    }
}
