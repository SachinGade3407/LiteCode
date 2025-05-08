// print square of even number.


class Demo{

	public static void main(String[]args){

		int N=934857676;

		while(N!=0){

			int rem=N%10;

			if(rem%2==0){
				System.out.print(rem*rem + " ");
			}
			N=N/10;
		}
	}
}
