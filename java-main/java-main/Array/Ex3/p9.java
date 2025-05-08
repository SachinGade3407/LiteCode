//Write a program to print the second max element in the array.


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

		int max2=secondMax(arr);
	
		System.out.println("Second maximum element in array is: " + max2);

	}
	static int secondMax(int arr[]){

		int max1=arr[0];
		int max2=arr[1];

		for(int i=1;i<arr.length;i++){

			if(arr[i]>max1){
				max2=max1;
				max1=arr[i];
			}else if(arr[i]>max2 && arr[i]!= max2){
				max2=arr[i];
			}
		}
		return max2;
	}
}
	

