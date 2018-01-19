

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int year;
		Scanner sc=new Scanner(System.in);
		System.out.println("ënter a year to be check");
		year=sc.nextInt();
		if(year%4==0)
		 System.out.println(year+"is leap year");
		else
		 System.out.println(year+"is not a leap year");
	}
}
