// prime no from 1 to 100 


class Demo{

	public static void main(String []ms){
	
	int num=100;
		for(int i=1;i<=num;i++){
		int count =0;
			for(int j=i;j>=1;j--){
			
				if(i%j==0){
				
				count =	count+1;
			
				}}
				if(count==2){
				System.out.println("Prime Numbers "+i);
				
				}
			
		}
	}
}
