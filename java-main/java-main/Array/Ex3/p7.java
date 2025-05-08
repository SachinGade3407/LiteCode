//WAP to find a Strong number from an array and return its index.

import java.io.*;

class Demo{

	public static void main(String[] args)throws IOException{

		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter array size");

		int size=Integer.parseInt(br.readLine());

		int arr[]=new int[size];

		System.out.println("Enter array elements");

		for(int i=0;i<size;i++){
			arr[i]=Integer.parseInt(br.readLine());
		}

		for(int i=0;i<size;i++){
			int sum=strong(arr[i]);

			if(arr[i]==sum){
				System.out.println("Strong " + arr[i] + " found at index: " + i);
			}
		}
	}

	static int strong(int x){

		int temp=x;
		int sum=0;

		while(temp!=0){
			int fact=1;

			int rem=temp%10;
			for(int i=1;i<=rem;i++){
				fact=fact*i;
			}
			sum=sum+fact;

			temp=temp/10;
		}
		return sum;
	}
}
