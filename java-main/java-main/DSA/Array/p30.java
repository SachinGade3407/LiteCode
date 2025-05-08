class Demo{
	public static void main(String[]args){
		int arr[][]=new int [][]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
		int N=4;
		int s=0;
		int e=N-1;
		for(int i=0;i<N;i++){
			for(int j=+1;j<N;j++){
				System.out.println(arr[i][j]);
			}
			while(s<e){
				int temp=arr[i][s];
				arr[i][s]=arr[i][e];
				arr[i][e]=temp;
				s++;
				e--;
			}
		}
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				System.out.println(arr[i][j]);
			}
		}
	}
}


