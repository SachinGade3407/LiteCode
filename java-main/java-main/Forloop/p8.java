// Takw N as I/P ,print wheather N is Aimstromg or not.


class Demo{

	public static void main(String[]args){

		int N=153;
		int temp1=N,temp2=N;
		int count=0;
		int sum=0;
		
		while(temp1!=0){
			count++;
			temp1=temp1/10;
		}
		while(N!=0){
			int rem=N/10;
			int mul=1;
			for(int i=1;i<count;i++){
				mul=mul*rem;
			}
			sum=sum+mul;
			temp1=temp1/10;
		}
		if(temp2==sum){
			System.out.println("N is Aimstromg Number");
		}else{
			System.out.println("N is Not Aimstromg Number");
		}
	}
}
