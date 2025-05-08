/*WAP to take size of array from user and also take integer elements from user Print sum of odd elements only*/
import java.util.*;
class Demo{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter array size:");
		int size=sc.nextInt();
		int arr[]=new int[size];
		int sum=0;
		System.out.println("Enter array element:");
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
			if(arr[i]%2!=0){
				sum=sum+arr[i];
			}
		}
		System.out.println("Sum of odd element ="+ sum);
	}
}
