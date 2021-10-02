import java.util.Scanner;
//ARMSTRONG number means sum of numbers of cubes equal to the number
public class ArmstrongNumber {
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
System.out.println("Enter any Number?=>");
// taking input from the user
int input = scanner.nextInt();
//calling isArmstrongNumber() method and put in a variable
double checkNumber=isArmstrongNumber(input);
//checking the number
if(input==checkNumber)
{
System.out.println(input+" is ARMSTRONG NUMBER");
}
else
{
System.out.println(input+" not is ARMSTRONG NUMBER");
}
scanner.close();
}
static int remainderNumber;
static double total = 0;
public static double isArmstrongNumber(int inputNumber) {
if (inputNumber > 0) {
remainderNumber = inputNumber % 10;//separating digits
total = total + Math.pow(remainderNumber, 3);//cubes sum
isArmstrongNumber(inputNumber / 10);//recursive call
}
return total;
}
}