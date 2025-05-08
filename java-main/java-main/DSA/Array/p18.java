class Demo{
	public static void main(String[]args){
		int arr[]=new int[]{5,-1,5,9,6,4,-2,2,8,6};
		int sum=0;
		int maxSum=Integer.MIN_VALUE;
		for(int i=0;i<arr.length;i++){
			sum=sum+arr[i];
			if(sum>maxSum)
				maxSum=sum;
			if(sum<0)
				sum=0;
		}
		System.out.println(maxSum);
	}
}

