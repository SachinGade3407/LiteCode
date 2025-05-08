// Palindrome number


class Demo{

	public static void main(String[]args){

		int N=3443;
		int temp=N;
		int rev=0;

		while(temp !=0){
			int rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(N==rev){
			System.out.println(N + " is a palindrome number");
		}else{
			System.out.println(N + " is not a palindrome number");
		}
	}
}
