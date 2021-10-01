package main;

import java.util.Scanner;

public class hcf_and_lcm {

	public static void main(String[] args) {
		
		Scanner in=new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		
		int answer=hcf(a,b);
		System.out.println(answer);	
		int result=lcm(a,b);
		System.out.println(result);
	}
	
	static int hcf(int n1 ,int n2) {
		
		int original_n1,original_n2;
		
		while(n1%n2!=0) {
			int rem = n1%n2;
			n1=n2;
			n2=rem;
			        
			
		}
		
		int hcf=n2;
//		System.out.println("The hcf of 2 given number is "+ hcf);
		

		
		
		return hcf;
	}
	
static int lcm(int n1 ,int n2) {
		
		int original_n1,original_n2;
		
		while(n1%n2!=0) {
			int rem = n1%n2;
			n1=n2;
			n2=rem;
			        
			
		}
		
		int hcf=n2;

		
		int lcm=(n1*n2)/hcf;
//		System.out.println("The LCM of 2 given numbers is "+ lcm);
		
		
		return lcm;
	}

}
