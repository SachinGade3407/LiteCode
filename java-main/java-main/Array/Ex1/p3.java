/*WAP to take size of array from user and also take integer elements from user Print product of odd index only*/

import java.util.*;
class Demo{
        public static void main(String[]args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter array size:");
                int size=sc.nextInt();
                int arr[]=new int[size];
                int mul=1;
                System.out.println("Enter array element:");
                for(int i=0;i<arr.length;i++){
                        arr[i]=sc.nextInt();
                        if(arr[i]%2==0){
                                mul=mul*arr[i];
                        }
                }
                System.out.println("product of odd element ="+ mul);
        }
}

