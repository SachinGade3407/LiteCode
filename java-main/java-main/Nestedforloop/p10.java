/* A 1 B 2 
   C 3 D 4
   E 5 F 6
   G 7 H 8
   */

class Demo{

	public static void main(String[]args){

		char ch= 'A';
		int num=1;

		for(int i=1;i<=4;i++){
			for(int j=1;j<=4;j++){
				if(j%2==1){
					System.out.print(ch++ + " ");
				}else{
					System.out.print(num++ + " ");
				}
			}
			System.out.println();
		}
	}
}

