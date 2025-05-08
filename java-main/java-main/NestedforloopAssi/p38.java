/*
A b C d
E f G h
I j K l
M n O p
*/

class Demo{

	public static void main(String[]args){

		char ch='A';
		int N=4;

		for(int i=1;i<=N;i++){
			for(int j=1;j<=N;j++){
				System.out.print(ch++ + " ");
			}
			System.out.println();
		}
	}
}

