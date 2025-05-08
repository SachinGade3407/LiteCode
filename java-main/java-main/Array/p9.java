class Demo{
	public static void main(String[]args){
		int arr[]=new int[]{10,20,30,40,50};
		int arr1[]=new int[]{10,20,30,40,50};
		
		System.out.println(arr);
		System.out.println(arr1);
		
		System.out.println(System.identityHashCode(arr[1]));
		System.out.println(System.identityHashCode(arr1[1]));
		
		System.out.println(arr[0]);
		System.out.println(arr1[0]);
	}
}

