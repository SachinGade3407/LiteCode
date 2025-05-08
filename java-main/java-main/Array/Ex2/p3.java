/*Write a Java program to find the sum of even and odd numbers in an array.
Display the sum value.*/

import java.util.*;
class Demo{
        public static void main(String[]args){

		Scanner sc = new Scanner (System.in);
		System.out.println("Enter array size:");

		int size=sc.nextInt();
		int arr[]=new int[size];

		int sum1=0;
		int sum2=0;

		System.out.println("Enter array elements:");

		for(int i=0;i<arr.length;i++){
                        arr[i]=sc.nextInt();

			if(arr[i]%2==0){
                                sum1=sum1+arr[i];;
			}else{
				sum2=sum2+arr[i];
			}
		}
                System.out.println("Array evevnsum="+ sum1);
                System.out.println("Array oddsum="+ sum2);
	}
}
