// Java code to implement factorial
public class Factorial_Rec
{

  // Factorial function
  static int f(int n){

    // Stop condition
      if (n == 0 || n == 1)
      return 1;
      else
      return n * f(n - 1);
  }

  // Driver code
  public static void main(String[] args){
      int n = 5;
      System.out.println("factorial of " + n + " is: " + f(n));
  }
}
