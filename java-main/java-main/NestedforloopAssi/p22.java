/*
1
3 4
6 7 8
10 11 12 13
15 16 17 18 19
*/

class Demo{

	public static void main(String[]args){

		int N=4;
		int num=1;

		for(int i=1;i<=N;i++){
			for(int j=1;j<=i;j++){
				System.out.print(num++ + " ");
			}
			num++;
			System.out.println();
		}
	}

}

