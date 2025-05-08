// Count digits of given number.


class Demo{

	public static void main(String[]args){

		int N=3407;
		int count=0;

		while(N!=0){
			count++;
			N=N/10;
		}
		System.out.println("Count digit of given number is " + count);
	}
}
