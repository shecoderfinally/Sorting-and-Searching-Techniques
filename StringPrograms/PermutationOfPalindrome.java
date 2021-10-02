/*

	Given a String S check if string S is a permutation of a palindrome or not. Note: Characters are case sensitive.
	
	example
	
	1) mma -> True
	
	2) Aab -> False 
	
	

*/


import java.io.*;
import java.util.*;
import java.lang.Math;
public class  PermutationPalindrome {

  public static int isPermutationPalindrome(String s ) {


    Map<Character,Integer> hash = new HashMap<>();

    for(char c: s.toCharArray()) {

      hash.put(c,hash.getOrDefault(c,0)+1);

    }
    int even=0;
    int odd =0;
    for(Map.Entry<Character,Integer> map : hash.entrySet()) {

        if(map.getValue()%2==0) {
          even++;
        }
        else {
          odd++;
        }

    }
    if(odd > 1) {
      return 0;
    }
    return 1;
    

  }
  public static void  main (String args []) {

    Scanner sc =  new  Scanner (System.in);
    int t = 1;
    t = sc.nextInt();
    sc.nextLine();
    while (t > 0) {
      t--;
      String s = new String();
      s = sc.next();

      int flag = isPermutationPalindrome(s);
      if (flag == 1) {
        System.out.println("True");
      } else {
        System.out.println("False");
      }
    }
  }
