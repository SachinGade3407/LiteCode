//Write a program to take range as input from the user and print perfect numbers

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
			int sum=0;
			for(int j=1;j<i;j++){
				if(i%j==0){
					sum=sum+j;
				}
			}


			if(sum==i){
				System.out.println(i+"\t");
			}
		}
	}
}
