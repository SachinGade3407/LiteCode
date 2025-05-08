/*Write a program to print the numbers divisible by 5 from 1 to 50 & the number is even also print the
count of even numbers.*/
import java.io.*;
class Demo{
	public static void main(String[] args)throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Start:");
		int startRange=Integer.parseInt(br.readLine());
		System.out.println("Enter End:");
		int endRange=Integer.parseInt(br.readLine());
		int count=0;
		System.out.println();
		for(int i=startRange;i<=endRange;i++){
			if(i%5==0 && i%2==0){
				count++;
				System.out.println(i+"\t");
			}
		}
		System.out.println("Count ="+count);
	}
}
