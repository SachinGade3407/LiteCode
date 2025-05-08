// Print N is perfect factoror not.

class Demo{

	public static void main(String[]args){

		int N=6;
		int sum=0;

		for(int i=1;i<N;i++){

			if(N%i==0){
				sum=sum+i;
			}
		}
		if(sum==N){
			System.out.println("N is Prefect Number");
		}else{
			System.out.println("Notis not Prefect Number");

		}
	}
}
