import java.util.*;

class Reverse{
	public static void main(String[] args){

		Scanner sc= new Scanner(System.in);

		System.out.println("Enter number");
		int num=sc.nextInt();

		int rev=Integer.MIN_VALUE;
	
		while(num !=0){

			int rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		System.out.println(rev);
	}
}

