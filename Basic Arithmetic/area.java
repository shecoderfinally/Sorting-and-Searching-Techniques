
// Program to calculate area of rectangle, square, triangle

import java.io.*;
import java.util.*;

class area
{
	public static void main(String args[])
	{
		int rectlen,rectbr,triheight,tribase,sqsize;
		float cirpi,cirradius;
		
		Scanner rectobj = new Scanner(System.in);
		Scanner sqobj = new Scanner(System.in);
		Scanner triobj = new Scanner(System.in);
		Scanner cirobj = new Scanner(System.in);		
		
		System.out.print("Enter the value of Length of Rectangle - ");
		rectlen = rectobj.nextInt();
		System.out.print("Enter the value of Breadth of Rectangle - ");		
		rectbr = rectobj.nextInt();		

		System.out.print("Enter the value of Size of Square - ");
		sqsize = sqobj.nextInt();
		
		System.out.print("Enter the value of Height of Triangle - ");
		triheight = triobj.nextInt();		
		System.out.print("Enter the value of Base of Triangle - ");		
		tribase = triobj.nextInt();
		
		System.out.print("Enter the value of Pi - ");
		cirpi = cirobj.nextFloat();
		System.out.print("Enter the value of Radius of Circle - ");		
		cirradius = cirobj.nextFloat();		

		
		System.out.println("Area of rectangle = "+(rectlen*rectbr));
		System.out.println("Area of square = "+(sqsize*sqsize));		
		System.out.println("Area of triangle = "+((triheight*tribase)/2));
		System.out.println("Area of circle = "+(cirpi*cirradius*cirradius));		
	}
}


/*
	C --- scanf, getch, getchar  (stdio.h, conio.h)
	C++ --- cin					 (iostream.h)

	functions - already defined in the library 
	
	Scanner object1 = new Scanner(System.in);  

    object1.readInt();

*/

