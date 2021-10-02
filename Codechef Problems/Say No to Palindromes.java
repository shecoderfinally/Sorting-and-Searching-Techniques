import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
// import java.math.BigDecimal;
import java.util.*;
 
public class Solution {
   static class Algebra {
      public static int GCD(int a, int b) {
         return b==0?a:GCD(b,a%b);
      }
   }
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        public FastReader() {
           br = new BufferedReader(new InputStreamReader(System.in));
        }
        int[] nextintArr(int n, FastReader fs) {
           int[] arr = new int[n];
           for(int i=0;i<n;i++) {
              arr[i] = fs.nextInt();
           }
           return arr;
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
 
  public static void main(String[] args) {
   FastReader fs = new FastReader();
   int n = fs.nextInt();
   int m = fs.nextInt();
   String s = fs.nextLine();
   String[] perm = {"abc","bac","bca","acb","cab","cba"};
   int[][] cache = new int[n][perm.length];
   for(int i=0;i<n;i++)
      for(int j=0;j<perm.length;j++) if(s.charAt(i) != perm[j].charAt(i%3)) cache[i][j] = 1;
   int[][] preSum = new int[n+1][perm.length];
   for(int i=0;i<perm.length;i++) {
      int curr = 0;
      for(int j=1;j<n+1;j++) {
         curr+=cache[j-1][i];
         preSum[j][i] = curr;
      }
   }
   while(m-->0) {
      int i = fs.nextInt() - 1;
      int j = fs.nextInt() - 1;
      // which case we have minimum changes
      int cost = Integer.MAX_VALUE;
      for(int p=0;p<perm.length;p++) {
         cost = Math.min(cost, preSum[j+1][p] - preSum[i][p]);
      }
      System.out.println(cost);
   }
 
   }
}
