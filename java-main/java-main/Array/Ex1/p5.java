/*Write a program ,take 10 input from the user and print only elements that are divisible by 5.*/
import java.util.*;
class Demo{
        public static void main(String[]args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter array size:");
                int size=sc.nextInt();
                int arr[]=new int[size];
                System.out.println("Enter array elements:");
                for(int i=0;i<arr.length;i++){
                        arr[i]=sc.nextInt();
		}
		System.out.println("Number divisible by 5 are: ");
		for(int i=0;i<arr.length;i++){
                        if(arr[i]%5==0){
				System.out.print(arr[i] + " ");
			}
		}
		System.out.println();
        }
}

