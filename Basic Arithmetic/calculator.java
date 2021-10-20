import java.util.*;
public class calculator {
    public static void main(String[] args) throws Exception {


        Scanner sc = new Scanner(System.in);

        System.out.println("----------WELCOME TO CALCULATOR-----------");

        System.out.println("Enter two numbers A and B");
        System.out.print("A: ");
        int a = sc.nextInt();
        System.out.print("B: ");
        int b = sc.nextInt();

        System.out.println("Choose Arithemetic Operation");
        System.out.println("Enter  * to multiplication");
        System.out.println("Enter  + for addition");
        System.out.println("Enter  - for subtraction");
        System.out.println("Enter  / for division ");

        char ch = sc.next().charAt(0);
        switch (ch) {
            case '+' -> {
                System.out.println(a + " + " + b + " = " + (a + b));
            }
            case '-' -> {
                System.out.println(a + " - " + b + " = " + (a - b));
            }
            case '/' -> {
                System.out.println(a + " / " + b + " = " + (a / b));
            }
            case '*' -> {
                System.out.println(a + " * " + b + " = " + (a * b));
            }
            default -> {
                System.out.println("invalid selection");
            }
        }
    }
}

