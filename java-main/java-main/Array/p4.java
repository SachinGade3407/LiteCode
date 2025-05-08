import java.util.*;
class Demo{

	public static void main(String[]args){

		Scanner sc = new Scanner(System.in);
		System.out.println("Enter array I/P:");
		int arr[]=new int[5];
		for(int i=0;i<5;i++){
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<5;i++){
			System.out.println(arr[i]);
		}
	}

}
