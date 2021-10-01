public class Rectangle {
    public static void main(String[] args) {
        int rows = 5, cols = 25;
        for(int i=0;i<=rows;i++) {
            for (int j = 0; j <= cols; j++) {
                if (i == 0 || i == rows || j == 0 || j == cols)
                    System.out.print("*"); //to print star
                else
                    System.out.print(" "); // to occupy blank spaces
            }
            System.out.println(); // to next line
        }
    }
}
