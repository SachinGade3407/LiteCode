class Demo{
	public static void main(String[]args){
		int arr[] = new int[]{7,8,9,5,4,1,3,2,6};
		for(int i=0;i<arr.length;i++){
			for(int j=0;j<arr.length-i-1;j++){
				if(arr[j]>arr[j-1]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
			System.out.print(arr[i]+ " ");
		}
		System.out.println();
	}
}

