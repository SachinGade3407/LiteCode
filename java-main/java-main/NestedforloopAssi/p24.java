/*
1 2 3 4
2 3 4
3 4
4
*/

class Demo {
    public static void main(String[] args) {
        int N=4;

        for(int i=0;i<N;i++) {
        
	    	for(int j=i+1;j<=N;j++) {
            
		    	System.out.print(j + " ");
            }

            System.out.println();
        }
    }
}


