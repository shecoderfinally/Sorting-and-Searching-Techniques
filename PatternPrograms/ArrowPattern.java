
import java.util.Scanner;

public class ArrowPattern {

  public static void main(String[] args) {
    int a, b, c, rows;

    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the number of rows you want to print: ");
    rows = sc.nextInt();

    System.out.println("");

    for (a = 1; a <= rows; a++) {
      for (b = a; b < rows; b++) {
        System.out.print(" ");
      }
      for (c = 1; c <= a; c++) {
        System.out.print("#");
        if (c == rows) {
          for (int d = 1; d <= rows * 2; d++) {
            System.out.print("#");
          }
        }
      }
      System.out.println("");
    }
    for (a = rows; a >= 1; a--) {
      for (b = a; b <= rows; b++) {
        System.out.print(" ");
      }
      for (c = 1; c < a; c++) {
        System.out.print("#");
      }
      System.out.println("");
    }
    sc.close();
  }
}