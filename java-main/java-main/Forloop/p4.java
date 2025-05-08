// Take N as I/P print all its factors.


class Demo{

	public static void main(String[]args){

		int N=6;

		for(int i=1;i<=6;i++){
			if(N%i==0){
				System.out.println(i);
			}
		}
	}
}
