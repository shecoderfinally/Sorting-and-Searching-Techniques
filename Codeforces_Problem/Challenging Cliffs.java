import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Solution {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        public FastReader() {
           br = new BufferedReader(new InputStreamReader(System.in));
        }
        String next() {
           while (st == null || !st.hasMoreElements()) {
              try {
                 st = new StringTokenizer(br.readLine());
              }
              catch (IOException e) {
                 e.printStackTrace();
              }
           }
           return st.nextToken();
        }
        int nextInt() {
           return Integer.parseInt(next());
        }
        long nextLong() {
           return Long.parseLong(next());
        }
        double nextDouble() {
           return Double.parseDouble(next());
        }
        String nextLine() {
           String str = "";
           try {
              str = br.readLine();
           }
           catch (IOException e) {
              e.printStackTrace();
           }
           return str;
        }
     }
     static void ln(String s){
        System.out.println(s);   
     }
     
     static int abs(int a,int b){
      if(b>a) return b-a;
      return a-b;
  }
  
  public static char nextChar(char curr) {
     if(curr == 'z') return 'a';
     else return (char)((int)curr+1);
  }
  
  public static int factorial(int i) {
     int res = 1;
     while(i>0) res*=i--;
     return res;
  }
  public static void main (String[] args) throws java.lang.Exception
  { 
   FastReader fs = new FastReader();     
   int t = fs.nextInt();
   while(t-->0) {
      int n = fs.nextInt();
      int[] arr = new int[n];
      for (int i = 0; i < arr.length; i++) {
         arr[i] = fs.nextInt();
      }   
      if(n==2) {
         System.out.println(Math.min(arr[1],arr[0])+" "+Math.max(arr[0], arr[1]));
         continue;
      }
      Arrays.sort(arr);
      int minDiff = Integer.MAX_VALUE;
      int start = 0, end = n-1;
      for (int i = 1; i < arr.length; i++) {
         if(arr[i]-arr[i-1]<minDiff) {
            minDiff = arr[i]-arr[i-1];
            start = i;
            end = i-1;
         }
      }
      for(;start<n;start++) {
         System.out.print(arr[start]+" ");
      }
      for(int i=0;i<=end;i++) {
         System.out.print(arr[i]+" ");
      }
      System.out.print("\n");
   }

  }
}
