/*Write a program to take range as input from the user and print the reverse of all numbers.*/

import java.io.*;

class Demo{
	public static void main(String[] args)throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Start:");
		int startRange=Integer.parseInt(br.readLine());
		System.out.println("Enter End:");
		int endRange=Integer.parseInt(br.readLine());

		System.out.println();
		for(int i=startRange;i<=endRange;i++){
			int num=i;
			int rev=0;
			while(num!=0){
				int rem=num%10;
				rev=rev*10+rem;
				num=num/10;
			}
			System.out.println(rev);
		}
	}
}
