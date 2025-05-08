//even no counr

import java.util.*;
class Demo{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter array size:");
		int size=sc.nextInt();
		int arr[]=new int[size];
		int count=0;
		System.out.println("Enter array elements:");
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
			if(arr[i]%2==0){
				count++;
			}
		}
		System.out.println("Array count="+ count);
		
	}

}
		
