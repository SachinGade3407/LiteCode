//Given an integer N print all its digit


class Demo{

	public static void main(String[]args){
		int N=6531;

		while(N!=0){
			System.out.println(N%10);
			N=N/10;
		}
		System.out.println(N);
	}
}
