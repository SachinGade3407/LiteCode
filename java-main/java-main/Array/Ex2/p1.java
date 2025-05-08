/*Write a program to create an array of ‘n’ integer elements.
Where ‘n’ value should be taken from the user.
Insert the values from users and find the sum of all elements in the array.*/

import java.util.*;
class Demo{
	public static void main(String[]args){
		Scanner sc = new Scanner (System.in);
		
		System.out.println("Enter Elements:");
		int size=sc.nextInt();
		int arr[]=new int[size];
		int sum=0;
		System.out.println("Enter array elements:");
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
			sum=sum+arr[i];
		}
		System.out.println("Sum of all elements="+ sum);
	}
}



