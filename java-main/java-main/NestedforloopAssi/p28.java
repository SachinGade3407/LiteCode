/*
10
I H
7 6 5
D C B A*/

class Demo{

	public static void main(String[]args){

		int num=10;
		int N=4;
		char ch='J';

		for(int i=1;i<=N;i++){
			for(int j=1;j<=i;j++){
				if(i%2!=0){
					System.out.print(num + " ");
				}else{
					System.out.print(ch + " ");
				}
				num--;
				ch--;
			}
			System.out.println();
			
		}
	}
}



