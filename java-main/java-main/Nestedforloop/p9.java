/* A 1 B 2
   A 1 B 2 
   A 1 B 2
   A 1 B 2 */

class Demo{

	public static void main(String[]args){

		for(int i=1;i<=4;i++){
			char ch='A';
			int num=1;
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
