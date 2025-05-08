//Factor of given number.


class Demo{

	public static void main(String[]args){

		int i=8;
		int fact=1;

		while(i>=1){
			fact=fact*i;
			i--;
		}
		System.out.println("Factorial is "+ fact );
	}
}
