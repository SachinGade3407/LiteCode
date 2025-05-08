//WAP to find the uncommon elements between two arrays.


import java.io.*;
class Demo{
        public static void main(String[]args)throws IOException{
                BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
                System.out.println("Enter first array size:");

                int size1=Integer.parseInt(br.readLine());
                int arr1[]=new int[size1];

                System.out.println("Enter array element:");
                for(int i=0;i<size1;i++){
                        arr1[i]=Integer.parseInt(br.readLine());
                }
                System.out.println("Enter second array size:");

                int size2=Integer.parseInt(br.readLine());
                int arr2[]=new int[size2];

                System.out.println("Enter array element:");

                for(int i=0;i<size2;i++){
                        arr2[i]=Integer.parseInt(br.readLine());
                }
                System.out.println("Common elements are :");
                for(int i=0;i<size1;i++){
                        for(int j=0;j<size2;j++){
                                if(arr1[i]!=arr2[j]){
                                        System.out.println(arr1[i]);
                                }
			}
		}
	}
}

                                                                                    



