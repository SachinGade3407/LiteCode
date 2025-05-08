//WAP to find an ArmStong number from an array and return its index.


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
			int sum=armstrong(arr[i]);

			if(arr[i]==sum){
				System.out.println("armstrong " + arr[i] + " found at index: " + i);
			}
		}
	}

	static int armstrong(int x){

		int temp1=x;
		int temp2=x;
		int count=0;
		int sum=0;

		while(temp1!=0){
			count++;
			temp1=temp1/10;
		}

		while(temp2!=0){
			int rem=temp2%10;
			int mul=1;

			for(int i=1;i<=count;i++){
				mul=mul*rem;
			}
			sum=sum+mul;
			temp2=temp2/10;
		}
		return sum;
	}
}

		
