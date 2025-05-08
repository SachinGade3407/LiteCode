/*write a program to print the following pattern
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7*/

class Demo{

	public static void main(String[]args){
		
		int[][] arr = {{1, 2, 3, 4},
                       {2, 3, 4, 5},
                       {3, 4, 5, 6},
                       {4, 5, 6, 7}};
		for(int i = 0; i < 4; i++) {     /*for(int i=1;i<=4;i++){
		                                   int k=i;
		                                   for(int j=1;j<=4;j++){  
		                                   System.out.print(k++ + " ");
		                                   }
		                                   System.out.println();
		                                   }*/         
			for(int j = 0; j < 4; j++) {
               
				System.out.print(arr[i][j] + " ");
            
			}
		    	System.out.println();
		}
	}
}
