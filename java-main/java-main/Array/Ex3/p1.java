//Write a program to print count of digits in elements of array.


import java.io.*;
class Demo{
	public static void main(String[]args)throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter array size:");
		int size=Integer.parseInt(br.readLine());

		int arr[]=new int[size];
		System.out.println("Enter array elements:");
		for(int i=0;i<size;i++){
			arr[i]=Integer.parseInt(br.readLine());
		}
		for(int i=0;i<size;i++){
			countDigits(arr[i]);
		}
	}
	static void countDigits(int x){
		int count=0;
		while(x!=0){
			count++;
			x=x/10;
		}
		System.out.println("Count of Digit:"+count);
	}
}

