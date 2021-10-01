import java.util.*;
public class calculator {
    public static void main(String[] args) throws Exception {


        Scanner sc=new Scanner(System.in);

        System.out.println("----------WELCOME TO CALCULATOR-----------");

        System.out.println("Enter two numbers A and B");
        System.out.print("A: ");
        int a=sc.nextInt();
        System.out.print("B: ");
        int b=sc.nextInt();

        System.out.println("Choose Arithemetic Operation");
        System.out.println("Enter  * to multiplication");
        System.out.println("Enter  + for addition");
        System.out.println("Enter  - for subtraction");
        System.out.println("Enter  / for division ");

        String ch=sc.next();
        if(ch.equals("*")){

            System.out.println(a*b);
        }
        else if(ch.equals("+")){

            System.out.println(a+b);

        }
        else if(ch.equals("-")){

            System.out.println(a-b);
        }
        else if(ch.equals("/")){
            System.out.println((double)a/(double)b);
        }
        else{
            System.out.println("invalid selection");
        }






    }
}

