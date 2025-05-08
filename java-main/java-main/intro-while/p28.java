/* Given an integer value as IP.
   print fizz if it is divisible by 3 ,buzz if it is divisible by 5, fizz-buzz if it is divisible by both,if not then not divisible by both.
   */

class Demo{

	public static void main(String[]args){

		int x=30;

		if(x%3==0 && x%5==0){
			System.out.println("Fizz-Buzz");
		}else if(x%3==0){
			System.out.println("Fizz");
		}else if(x%5==0){
			System.out.println("Buzz");
		}else{
			System.out.println("Not divisible by both");
		}
	}
}
