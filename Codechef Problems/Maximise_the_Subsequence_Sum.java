// Problem Link : https://www.codechef.com/START10C/problems/SIGNFLIP
// Problem : Maximise the Subsequence Sum 

// Solution : 

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
			try {
		      Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){
           int n = sc.nextInt();
           int k = sc.nextInt();
           int m = n;
           int sum = 0;
            PriorityQueue<Integer> arr = new PriorityQueue<Integer>();
            while(m-- > 0){
                arr.add(sc.nextInt());
            }
            if (k > 0) {
                while (k != 0) {
                    if(arr.peek() < 0) {
                        int r = arr.poll() * -1;
                        sum = sum + r;
                        k--;
                    } else {
                        k = 0;
                    }
                    }
                while(arr.size() != 0) {
                    if(arr.peek() < 0) {
                        arr.poll();
                    }else{
                        int r = arr.poll();
                        sum = sum + r;
                    }

                }
            }else{
                while(arr.size() != 0){
                    if (arr.peek() < 0) {
                        arr.poll() ;
                    } else {
                        int r = arr.poll();
                        sum = sum + r;
                    }
            }

        }
            System.out.println(sum);
         }
		} catch(Exception e) {
		    return;
		}
		
		
	}
}
