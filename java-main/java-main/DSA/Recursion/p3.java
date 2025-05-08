import java.util.*;
class BinarySearch{
        int binarysearch(int arr[],int search,int start,int end){
		if(start>end){
			return -1;
		}else{
			int mid = (start+end)/2;
				if(arr[mid]==search)
					return mid;
			if(arr[mid]<search)
				return binarysearch(arr,mid+1,end,search);
			else
				return binarysearch(arr,start,mid-1,search);
		}
	}
     	public static void main(String[]args){
                int arr[] = new int[]{4,7,11,24,35,57,67,68,94};
                Scanner sc = new Scanner(System.in);
                int search = sc.nextInt();
                BinarySearch obj = new BinarySearch();
                int index = obj.binarysearch(arr,search,start,end);

                if(index == -1)
                        System.out.println("Not found");
                else
                        System.out.println("found indexat "+  index);
        }
}


