class ArrayDemo{
	public static void main(String[]args){
		int arr[]=new int[]{2,4,1,3,9,2,6,7};
		int N=8;
		int i=0;
		int j=N-1;
		while(i<j){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
		System.out.println(arr[i]);
	}
}

