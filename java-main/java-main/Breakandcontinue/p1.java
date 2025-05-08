class Demo{

	public static void main(String[]args){

		int  N=10;
		int count=0;

		for(int i=1;i<=N;i++){
			if(N%i==0){
				count++;
			}
			if(count>2){
				break;
			}
			if(count==2){
				System.out.println("Number is Prime");
			}else{
				System.out.println("Number is not Prime");
			}
		}
	}

}
