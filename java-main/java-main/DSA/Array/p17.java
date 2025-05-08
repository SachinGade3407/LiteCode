class Demo{
	public static void main(String[]args){
		int arr[]=new int[]{-2,1,-3,4,2,1,-5,4};
		int prefixsum[]=new int [arr.length];
		int prefixsum[0]=arr[0];
		for(int i=0;i<arr.length;i++){
			prefixsum[i]=prefixsum[i-1]+arr[i];
			for(int i=0;i<arr.length;i++){
				for(int j=i;j<arr.length;j++){
				int sum=0;
				if(i==0)
					sum=sum+prefixsum[j];
				else
					sum=prefixsum[j]-prefixsum[i-1];
				System.out.println(sum);
				}
			}
		}
	}
}


