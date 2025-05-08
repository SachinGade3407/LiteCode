//print perfect square root till N

class Demo{

	public static void main(String[]args){

		int i=1;
		int N=100;

		while(i<N){
			if(i*i<=100){
			System.out.println(i*i);
			i++;
			}
			System.out.println(i);
		}
	}
}
