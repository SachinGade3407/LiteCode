import java.util.Scanner;
class Demo{
	public static void main(String[]args){
		Scanner sc=new Scanner(System.in);
		int x=sc.nextInt();
		try{
			if(x==0){
				throw new ArithmeticException("Dividing by 0");
			}
			System.out.println(10/x);
		}catch(ArithmeticException ae){
			System.out.println("Exception in thread"+Thread.currentThread().getName()+" ");
			ae.printStackTrace();
		}
	}
}

