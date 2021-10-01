import java.util.Scanner;

public class EvenorOdd
{
    public static void main(String[] args)
    {
        int n;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the number: ");
        n = in.nextInt();

        result(n);
    }

    static void result(int n) {
        if (n % 2 == 0)
        {
            System.out.println("Even");
        }
        else
        {
            System.out.println("Odd");
        }
    }
}
