
//Write a Java Program to left rotate the elements of an array

import java.util.*;

public class Main
{
	public static void main(String ar[])
	{
		Scanner sc=new Scanner(System.in);
	    System.out.println("enter no of elemnts of array :");
		int n=sc.nextInt();    
	 System.out.println("number of rotation to be performed in the array :");
		int d=sc.nextInt();  
		int a[]=new int[n];
		 System.out.println("Enter elements of array :");
		for(int i=0;i<n;i++)
		{
			int ele=sc.nextInt();
			a[(i-d+n)%n] = ele;
		}
		System.out.println("Array after left rotation");
		for(int i=0;i<n;i++)
			System.out.print(a[i]+" ");
	}
}