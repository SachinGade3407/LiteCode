// Automorphic Number.
// 25=25*25=625.


class Demo{

	public static void main(String[]args){

		int N=25;
		int temp1=N;
		int count=0;

		while(temp1!=0){
			count++;
			temp1=temp1/10;
		}
		int sqr=N*N;
		int rev1=0;
		for(int i=1;i<=count;i++){
			int rem=sqr%10;
		        rev1=rev1*10+rem;
			sqr=sqr/10;
		}
		int rev2=0;
		while(rev1!=0){
			int rem1=rev1%10;
		        rev2=rev2*10+rem1;
			rev1=rev1/10;
		}
		if(N==rev2){
			System.out.println(N + " is Automorphic");
		}else{
			System.out.println(N + " is not Automorphic");
		}
	}
}
			

