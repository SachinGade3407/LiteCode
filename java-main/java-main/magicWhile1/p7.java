// If number even print it in reverse order and if number is odd than print reverse order  by difference order by 2.

class Demo{

	public static void main(String[]args){

		int N=99;


		if(N%2==0){

			while(N>=1){
				System.out.println(N);
				N--;
			}
		}else{
			while(N>=1){
				System.out.println(N);
				N=N-2;
			}
		}
	}
}
