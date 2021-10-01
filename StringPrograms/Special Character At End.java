import java.util.Scanner;
// Other imports go here
// Do NOT change the class name

/*Special Character String In a given String S, Move all special characters to the end of the String.
Sample Input:
Co#&de!**Quoti%%@^ent
Sample Output:
CodeQuotient#&!**%%@^*/

class Main
{
    public static void main(String[] args)
    {
        // Write your code here
        Scanner obj = new Scanner(System.in);
        String s=obj.nextLine();
        int l=s.length();
        char arr[]=new char[l];
        char a[]=new char[l];
        int j=0,k=0;
        for(int i=0;i<l;i++)
        {
            if(s.charAt(i)>=65 && s.charAt(i)<92 || s.charAt(i)>=97 && s.charAt(i)<123)
            {
                arr[j]=s.charAt(i);
                j++;
            }
            else
            {
                a[k]=s.charAt(i);
                k++;
            }
        }
        for(int i=0;i<j;i++)
        {System.out.print(arr[i]);}

        for(int i=0;i<k;i++)
        {System.out.print(a[i]);}

    }
    }