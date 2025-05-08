// Count number of odd digit 
 
class Demo{

	public static void main(String[]args){

		int N=465374896;
		int count=0;

		while(N!=0){
			int rem=N%10;
			if(rem%2!=0){
				count++;
			}
			N=N/10;
		}
		System.out.println("Count number of odd digit is " + count);
		
	}
}
