import java.util.Scanner;
class Numbers_Rectangle_with_diamond_hollow_pattern{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i,j,k,n;
		n=5;//n = sc.nextInt();
		int countSpace=0;	
		for(i=n;i>0;i--) {
			for(k=1;k<=i;k++)
				System.out.print(n-k+1);
			for(j=0;j<2*n-2*i-1;j++) {
				System.out.print(" ");
			}
			countSpace++;
			if(i==n)
				for(k=i-1;k>=1;k--)
					System.out.print(k);
			else
				for(k=i;k>=1;k--)
					System.out.print(k);
			System.out.println();
		}
		countSpace=n-1;	
		for(i=2;i<=n;i++) {
			for(k=1;k<=i;k++)
				System.out.print(n-k+1);
			for(j=0;j<2*n-2*i-1;j++) {
				System.out.print(" ");
			}
			countSpace--;
			if(i==n)
				for(k=i-1;k>=1;k--)
					System.out.print(k);
			else
				for(k=i;k>=1;k--)
					System.out.print(k);
			System.out.println();
		}
		
	}
}
/* 
Output:

543214321
5432 4321
543   321
54     21
5       1
54     21
543   321
5432 4321
543214321

*/