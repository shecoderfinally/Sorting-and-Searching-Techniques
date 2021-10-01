import java.util.Scanner;
class ReverseStringForloop{
public static void main(String args[]){
    String str;//declare a String variable
    char ch;//declare a char variable
    System.out.println("Enter a String as you wish: ");
    //ask input from the user
Scanner scan=new Scanner(System.in);
//cretae scanner object
    
   str =scan.nextLine();
   System.out.println("Reserve of given String "+str+" is : ");
   for(int j=str.length(); j>0; j--){
       System.out.print(str.charAt(j-1));
   }
}
}
