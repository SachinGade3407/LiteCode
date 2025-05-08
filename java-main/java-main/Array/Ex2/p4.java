/*WAP to search a specific element from an array and return its index.*/

import java.util.*;

class Demo{
    public static void main(String[] args){
	    System.out.println("Enter array size:");
	    Scanner sc = new Scanner(System.in);
	    int size=sc.nextInt();
	    int arr[]=new int[size];
	    int target=0;
	    System.out.println("Enter array elements:");
	    int index = Arrays.binarySearch(arr, target);
	    if (index < 0) {
		    System.out.println("Element not found");
	    } else {
		    System.out.println("Element found at index " + index);
        }
    }
}

