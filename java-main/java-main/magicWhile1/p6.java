// Print sum of even number and multiplication of odd number fropm 1 to 10.


class Demo{

	public static void main(String[]args){

		int N=1;
		int sum=0;
		int mul=1;

		while(N<=10){

			if(N%2==0){
				sum=sum+N;
			}else{
				mul=mul*N;
			}
			N++;
		}
		System.out.println("sum of even number is "+ sum);
		System.out.println("multiplication of odd number is "+mul);
	}
}
