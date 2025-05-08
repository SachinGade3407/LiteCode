/*WAP to find the number of even and odd integers in a given array of integers*/

import java.util.*;
class Demo{
        public static void main(String[]args){

		Scanner sc = new Scanner (System.in);
		System.out.println("Enter array size:");

		int size=sc.nextInt();
		int arr[]=new int[size];

		int evenCount=0;
		int oddCount=0;

		System.out.println("Enter array elements:");

		for(int i=0;i<arr.length;i++){
                        arr[i]=sc.nextInt();

			if(arr[i]%2==0){
                                evenCount++;
			}else{
				oddCount++;
			}
		}
                System.out.println("Array evevn no count="+ evenCount);
                System.out.println("Array odd no count="+ oddCount);
	}
}

