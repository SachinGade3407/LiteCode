class ArrayDemo{
	public static void main(String[]args){
		int count=0;
		int N=10;
		int maxEle=Integer.MIN_VALUE;
		for(int i=0;i<N;i++){
			if(arr[i]>maxEle)
				maxEle=arr[i];
			}
			for(int i=0;i<N;i++){
				if(arr[i]==maxEle)
					count++;
			}
			System.out.println(N-count);
	}
}


		
