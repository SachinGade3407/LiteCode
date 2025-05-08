//Write a program to take range as input from the user and print Armstrong number.*/

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
			int cnt=0,sum=0;
			while(num!=0){
				cnt++;
				num=num/10;
			}
			num=i;
			while(num!=0){
				int mult=1;
				int rem=num%10;
				for(int j=1;j<=cnt;j++){
					mult=mult*rem;
				}
				sum=sum+mult;
				num=num/10;
			}if(sum==i){
				System.out.println(i);
			}
		}
	}
}
