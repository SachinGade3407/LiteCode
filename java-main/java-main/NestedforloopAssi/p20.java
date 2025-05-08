/*
1 2 3 4
4 5 6
6 7
7
*/

class Demo{

	public static void main(String[]args){

		int N=4;
		int num=1;

		for(int i=1;i<=N;i++){
			for(int j=1;j<=N-i+1;j++){
				System.out.print((num++)+ " ");
			}
			num--;
			System.out.println();
		}
	}
}
