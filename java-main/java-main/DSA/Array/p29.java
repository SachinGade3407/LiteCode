class Demo{
	public static void main(String[]args){
		int arr[][]=new int [][]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
		for(int i=0;i<arr.length;i++){
			for(j=i+1;j<arr.length;j++){
				int temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
			}
		}
		for(int i=0;i<arr.length;i++){
			for(j=0;j<arr.length;j++){
				System.out.println(arr[j][i]);
			}
		}
	}
}


