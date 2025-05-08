/*
F
E F
D E F
C D E F
B C D E F
A B C D E F
*/

class Demo{

	public static void main(String[]args){

		int N=6;
		char ch=(char)(64+N);

		for(int i=1;i<=N;i++){
			char temp=ch--;
			for(int j=1;j<=i;j++){
				System.out.print(temp++ + " ");
			}
			System.out.println();
		}
	}
}
