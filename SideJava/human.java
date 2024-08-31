package S1tcnt;

import java.util.Scanner;

public class human {
    public String name;
    public String sname;
    protected int age;

    public human(){

    }

    public void method(int age, String sname, String name, Scanner scn){
        for(int i = 0; i < 3; i++){
            int y = 0;
            if (age == 0){
                System.out.println("Enter your age");
                age = scn.nextInt();
                this.age = age;
            } else if(name == null || y == 1){
                y = 1;
                System.out.println("Enter your Name");
                name = scn.next();
                this.name = name;
            } else if (sname == null || y == 1){
                y = 1;
                System.out.println("Enter your SurName");
                sname = scn.next();
                this.sname = sname;
            }
        }

    }

}


