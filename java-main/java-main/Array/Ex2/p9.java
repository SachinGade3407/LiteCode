//Write a Java program to merge two given arrays.


class Demo{
	public static void main(String[]args){
		int arr1[]={10,20,30,40,50};
		int arr2[]={60,70,80,90};
		int arr3[]=new int [arr1.length+arr2.length];
		int i=0;
		for(;i<arr1.length;i++){
			arr3[i]=arr1[i];
		}
		for(int j=0;j<arr2.length;j++,i++){
			arr3[i]=arr2[j];
		}
		for(int k=0;k<arr3.length;k++){
			System.out.println(arr3[k]+ " ");
		}
	}
}
