// Composite Number

class Demo{

	public static void main(String[]args){

		int N=7;
		int count=0;

		for(int i=1;i<=N;i++){
			if(N%i==0){
				count++;
			}
		}
		if(N==1 || N==0){
			System.out.println(N + " is neither prime or composite number");
		}else if(count>2){
			System.out.println(N +  " is Composite Number");
		}else{
			System.out.println(N +  " is Prime Number");
		}
	}
}

