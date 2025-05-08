/*
1
8 9
9 64 25
64 25 216 49 */

class Demo{

	public static void main(String[] args){

		int num=1;

		for(int i=1;i<=4;i++){

			int num1=num;

			for(int j=1;j<=i;j++){

				if(num1%2==0){
					System.out.print(num1*num1*num1 +" ");
				}else{
					System.out.print(num1*num1 +" ");
				}
				num1++;
			}
			System.out.println();
			num++;
		}
	}
}
