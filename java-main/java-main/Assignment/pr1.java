/*
            1
         2  4
      3  6  9
   4  8  12 16
*/

class Demo{
	public static void main(String[]args){
		int x = 4;
		for(int i=1;i<=x;i++){
			for(int j=1;j<=x-i;j++){
				System.out.println("  ");
			}
			int n=i;
			for(int j=1;j<=i;j++){
				System.out.println(n);
				if(j<i){
				System.out.println("  ");
				}
				System.out.println();
			}
		}
	}
}





