public class JavaPattern {
    public static void main(String[] args) {
        int i,j, rows=10;

        //upper half
        for(i=rows; i>=1; i--) {
            for (j = 1; j <= i; j++) {
                System.out.print("* ");
                if (i == 1) {
                    for (int a = 1; a <= rows * 2; a++) {
                        System.out.print("* ");
                    }
                }
            }
            System.out.println();
        }

        //lower half
        for(i=2; i<=rows; i++){
            for(j=1;j<=i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }

    }
}