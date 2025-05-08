class Demo{

	public static void main(String[]args){

		int N=10;

		for(int i=1;i<=N;i++){
			if(i%3==0){
				continue;
			}
			System.out.println(i);
		}
	}
}
