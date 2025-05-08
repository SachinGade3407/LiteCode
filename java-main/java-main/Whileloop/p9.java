/*Take an integer N as input 
  print perfect square till N 
  perfect square: An integer whose square root is a integer*/

class Demo{

	public static void main(String[]args){

		int i=1;
		int N=100;
		while(i*i<=N){
			System.out.println(i*i);
			i++;
		}
	
	}

}
