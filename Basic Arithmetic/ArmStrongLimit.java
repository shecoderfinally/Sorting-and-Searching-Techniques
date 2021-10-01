import java.util.*;
public class ArmStrongLimit {
    public static void main(String args[]) {
    Scanner sc= new Scanner(System.in);  
    System.out.print("Enter the limit: ");  
    int num=sc.nextInt();  
    System.out.println("Armstrong Number up to "+ num + " are: ");  
    for(int i=0; i<=num; i++) 
    {
    if(isArmstrong(i))
      System.out.print(i+" ");  
    }   
}
    
    private static boolean isArmstrong(int n)
    {
        int rem = 0;
        int sum = 0;
        int temp = n;
        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp/10;
        }
        
        if(sum == n)
          return true;
      return false;
    }
}