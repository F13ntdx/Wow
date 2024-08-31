package S1tcnt;

import java.util.Scanner;


public class Main {
    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);
        human human = new human();
        human.age = 0;
        human.method(human.age, human.sname, human.name, scn );
        System.out.println("Your age: " + human.age + "\nYour Name: " + human.name + "\nYour surname: " + human.sname);
    }
}