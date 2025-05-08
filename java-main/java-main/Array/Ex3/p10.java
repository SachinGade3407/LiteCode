//Write a program to print the second min element in the array.


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

		int min2=secondMin(arr);

		System.out.println("Second minimum element in array is: " + min2);

	}
	static int secondMin(int arr[]){

		int min1=arr[0];
		int min2=arr[1];

		for(int i=1;i<arr.length;i++){

			if(arr[i]<min1){
				min2=min1;
				min1=arr[i];
			}else if(arr[i]<min2 && arr[i]!=min2){
				min2=arr[i];
			}
		}
		return min2;
	}
}
