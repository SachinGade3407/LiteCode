class Demo{
	public static void main(String[]args){
		int arr[][]=new int [][]{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
		int i=0;
		int j=0;
		while(i<arr.length && j<arr.length){
			System.out.println(arr[i][i]);
			i++;
			j++;
		}
	}
}

