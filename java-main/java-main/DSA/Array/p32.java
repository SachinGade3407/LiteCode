class Demo{
        public static void main(String[]args){
                int N=4;
                int i=0;
                int j=0;
                int arr[][]=new int[][]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
                while(N>1){
			for(int x=0;x<N-1;x++){
                        	System.out.println(arr[i][j]);
                        	j++;
                	}
                	for(int x=0;x<N-1;x++){
                        	System.out.println(arr[i][j]);
                        	i++;
                	}
                	for(int x=0;x<N-1;x++){
                        	System.out.println(arr[i][j]);
                       		j--;
                	}
                	for(int x=0;x<N-1;x++){
                        	System.out.println(arr[i][j]);
                        	i--;
			}
			N=N-2;
			i++;
			j++;
		}
		if(N==1)
			System.out.println(arr[i][j]);
	}
}

