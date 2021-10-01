import java.util.Scanner;
class SmithNumber
{
    public int digitSum(int n)
    {
        int sum = 0;
        for(int x = n ; x!=0 ; x/=10)
        {
            sum+=x%10;
        }
        return sum;
    }
    public static void main(String[]args)
    {
        Scanner sc = new Scanner(System.in);
        SmithNumber ob = new SmithNumber();
        System.out.println("Enter any number");
        int n = sc.nextInt();
        
        int s1 = ob.digitSum(n);
        int s2=0;
        int d = 2;
        while(n>1)
        {
            if(n%d==0)
            {
                n/=d;
                s2+=ob.digitSum(d);
            }
            else
            {
                d++;
            }
        }
        
        if(s1==s2)
        System.out.println("Smith Number");
        else
        System.out.println("Not a smith number");
    }
}
