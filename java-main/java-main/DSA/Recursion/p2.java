import java.util.*;
class BinarySearch{
	int binarysearch(int arr[],int search){
	int count=0;
	int s = 0;
	int e = arr.length-1;
	while(s <= e){
		int mid=s+e/2;
		count++;
		if(arr[mid]==search)
			return mid;
		if(arr[mid]<search)
			s=mid+1;
		if(arr[mid]>search)
			e=mid-1;
	}
	return -1;
	}
	
	public static void main(String[]args){
		int arr[] = new int[]{4,7,11,24,35,57,67,68,94};
		Scanner sc = new Scanner(System.in);
		int search = sc.nextInt();
		BinarySearch obj = new BinarySearch();
		int index = obj.binarysearch(arr,search);

		if(index == -1)
			System.out.println("Not found");
		else
			System.out.println("found indexat "+  index);
	//	System.out.println(count);

	}
}

