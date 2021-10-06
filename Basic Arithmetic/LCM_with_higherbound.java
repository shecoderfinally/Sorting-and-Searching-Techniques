/*
This program gives the smallest multiple of all natural numbers up until HIGHER_BOUND.

- index keeps track of current factor until equal to HIGHER_BOUND
- for each index (factor), check if divisible by current factors of lcm in list. 
- if divisable, divide out and multiply remaining factor on top of lcm.
- add new factors to list. output final result in the end.
*/

import java.util.ArrayList;
import java.util.Scanner;

public class LCM_with_higherbound {
    static final Scanner in = new Scanner(System.in);
    
    public static void main(String[] args) {
	int lcm = 1;
        int index = 2;
        final int HIGHER_BOUND = in.nextInt();
        var listOfFactors = new ArrayList<Integer>();

        while (index <= HIGHER_BOUND) {
            
            int factor = index;

            for (int i = 0; i < listOfFactors.size(); i++) {
                if (factor % listOfFactors.get(i) == 0) {
                    factor /= listOfFactors.get(i);
                }
            }
            
            listOfFactors.add(factor);
            lcm *= factor;
            index++;
        }
        System.out.println(lcm);
    }    
}
