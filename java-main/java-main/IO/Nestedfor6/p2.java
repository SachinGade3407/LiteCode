/*Write a program to take range as input from the user and print composite numbers.*/


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
			int count=0;
			for(int j=1;j*j<=i;j++){
				if(i%j==0)
					count++;

			}
			if(count>=2)
				System.out.println(i);
		}
	}
}


