/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int n,orginalinteger,remainder,reversedinteger=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter an integer");
		n=sc.nextInt();
		orginalinteger=n;
		while(n!=0)
		{
			remainder=n%10;
			reversedinteger=(reversedinteger*10)+remainder;
			n=n/10;
		}
	if(orginalinteger==reversedinteger)
	
		System.out.println("given integer is palindrome");
   else
   System.out.println("given integer is not a palindrome");
	}
	
}
