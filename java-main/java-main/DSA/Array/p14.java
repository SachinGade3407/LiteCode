class PrefixsumofSubarray{
	public static void main(String[]args){
		int arr[] = new int[]{2,4,1,3};
		int Prefixsum[]=new int[arr.length];
		Prefixsum[0]=arr[0];
		for(int i=1;i<arr.length;i++){
			Prefixsum[i]=Prefixsum[i-1]+arr[i];
		}
		for(int i=0;i<arr.length;i++){
			int sum=0;
			for(int j=i;j<arr.length;j++){
				if(i==0)
					sum=Prefixsum[j];
				else
					sum=Prefixsum[j]-Prefixsum[i-1];
				System.out.println(sum);
			}
		}
	}

}
