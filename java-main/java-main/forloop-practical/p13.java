// Strong Number.
// 145= 1 + 4*3*2*1 + 5*4*3*2*1 = 145

class Demo{

	public static void main(String[]args){

		int N=145;
		int temp1=N;
		int sum=0;

		while(temp1!=0){
			int fact=1;
			int rem=temp1%10;

			for(int i=rem;i>=1;i--){
				fact=fact*i;
			}
			sum=sum+fact;
			temp1=temp1/10;
		}
		if(N==sum){
			System.out.println(N + " is Strong Number");
		}else{
			System.out.println(N + " is Not Strong Number");
		}
	}
}
