//WAP to reverse each element in an array.
import java.io.*;

class Demo{

	public static void main(String[] args)throws IOException{

		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter array size");

		int size=Integer.parseInt(br.readLine());

		int arr[]=new int[size];

		System.out.println("Enter array elements");

		for(int i=0;i<size;i++){
			arr[i]=Integer.parseInt(br.readLine());
		}

		System.out.println("Reverse numbers are: ");

		for(int i=0;i<size;i++){
			revNum(arr[i]);
		}
	}

	static void revNum(int x){

		int rev=0;

		while(x!=0){

			int rem=x%10;
			rev=rev*10+rem;
			x=x/10;
		}
		System.out.println(rev + " ");
	}
}


