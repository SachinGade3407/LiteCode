//WAP to find a prime number from an array and return its index.
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

		for(int i=0;i<size;i++){
			int count=primeNum(arr[i]);

			if(count==2){
				System.out.println("Prime " + arr[i] + " " + " found at index: " + " " + i);
			}
		}
	}
	static int primeNum(int x){

		int count=0;

		for(int i=1;i<=x;i++){

			if(x%i==0){
				count++;
			}
		}
		return count;
	}
}


