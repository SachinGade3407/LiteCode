/*
1
2 3
3 4 5
4 5 6 7
*/

class Demo{

	public static void main(String[]args){

		int N=4;
		int num=1;

		for(int i=1;i<=N;i++){
			int num1=num;
			for(int j=1;j<=i;j++){
				System.out.print(num1++ + " ");

				
			}
			System.out.println();
			num++;
		}
	}
}

