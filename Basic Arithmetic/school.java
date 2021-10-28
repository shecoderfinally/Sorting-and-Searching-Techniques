import java.util.Scanner;
public class school
{
    public school()
    {
        Scanner input=new Scanner(System.in);
        int age=0;
        System.out.println("Enter your age please: ");
        age=input.nextInt();
        if (age>3)
        {
            System.out.println("You are eligible to go in school!");
        }
        else
        {
            System.out.println("Not eligible to go to school");
        }
    }
}
        
        


