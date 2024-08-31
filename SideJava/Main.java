package S1tcnt;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        boolean found = false;
        long limit = 0;
        int plc = 0;
        Map<Integer, String> integertomap = new HashMap<>();
        integertomap.put(68, "Wheeheeee");

        Scanner scan = new Scanner(System.in);
        System.out.println("Put the number of times you want to try??");

        limit = scan.nextInt();


        for(Integer i = 0; i < limit; i++) {
                if (integertomap.get(i).equals("Wheeheeee")){
                    System.out.println(integertomap.get(i));
                    found = true;
                    break;
                } else {
                    plc = i;
                    System.out.println(plc + " Did not work trying: " + plc + "+" + "1");
                }
        }
        if (found){
            System.out.println("Password found successfully" + " Password equals to = " + (plc+1));
        } else {
            System.out.println("Sorry but we could not find the password maybe increase the trial number??");
        }
    }
}