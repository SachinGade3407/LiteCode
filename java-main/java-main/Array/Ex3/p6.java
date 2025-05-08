//WAP to find a palindrome number from an array and return its index.

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
			int rev=palindrome(arr[i]);

			if(arr[i]==rev){
				System.out.println("Palindrome " + arr[i] + " found at index: " + i);
			}
		}
	}

	static int palindrome(int x){

		int temp=x;
		int rev=0;

		while(temp!=0){

			int rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		return rev;
	}
}
