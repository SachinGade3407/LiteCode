/*Write a program to take a range as input from the user and print perfect squares between that range.*/

import java.io.*;
class perfectSquare{
	public static void main(String[] args)throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Start:");
		int startRange=Integer.parseInt(br.readLine());
		System.out.println("Enter End:");
		int endRange=Integer.parseInt(br.readLine());

		System.out.println();
		for(int i=startRange;i<=endRange;i++){
			for(int j=1;j*j<=i;j++){
				if(j*j==i)
					System.out.println(i+"\t");
			}
		}
	}
}

