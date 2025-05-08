// prime number or not.


class Demo{
	public static void main(String[]args){

		int N=5;
		int count=0;

		for(int i=1;i<=5;i++){

			if(N%i==0){
				count++;
			}
		}
		if(count==2){
	
			System.out.println(N + " is prime number");

		}else{
	
			System.out.println(N + " is not prime number");
		}
	}
}

