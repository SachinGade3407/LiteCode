// even and odd no count

import java.util.*;
class Demo{
        public static void main(String[]args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter array size:");
                int size=sc.nextInt();
                int arr[]=new int[size];
                int count1=0;
		int count2=0;
                System.out.println("Enter array elements:");
                for(int i=0;i<arr.length;i++){
                        arr[i]=sc.nextInt();
                        if(arr[i]%2==0){
                                count1++;
			}else{
				count2++;
			}
		}
                System.out.println("Array evevn no count="+ count1);
                System.out.println("Array odd no count="+ count2);
	}
}

		

