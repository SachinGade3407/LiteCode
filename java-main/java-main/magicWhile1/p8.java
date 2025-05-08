//print countdown of days to submit assignment.


class Demo{

	public static void main(String[]args){

		int N=7;

		while(N>=1){
			System.out.println(N + " days remaining");
			N--;
		}
		if(N==0){
			System.out.println("0 days remaining assignment is overdue");
		}
	}
}
