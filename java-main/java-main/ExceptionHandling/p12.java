import java.util.*;
class Demo{
	public static void main(String[]args){
		Scanner sc=new Scanner(System.in);
		try{
			int x=sc.nextInt();
		}catch(ArithmeticException | NullPointerException obj){
			System.out.println("Exception Handled");
		}

	}
}


