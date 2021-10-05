import java.util.*; 
public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int spaces = n / 2;
		int stars = 1;
		int val = 1;
		int k = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= spaces; j++) {
				System.out.print("\t");
			}
			
			int ival = val;
			for (int j = 1; j <= stars; j++) {
				System.out.print(ival + "\t");
				if (j < stars/ 2 + 1)
					ival++;
				else
					ival--;
			}

			if (i < (n / 2 + 1)) {
				stars += 2;
				spaces --;
				val++;
			} else {
				stars -=2;
				spaces ++;
				val--;
			}

			System.out.println();
		}
	}
}

/*
Sample Input
5
Sample Output
		1	
	2	3	2	
3	4	5	4	3	
	2	3	2	
		1	
*/
