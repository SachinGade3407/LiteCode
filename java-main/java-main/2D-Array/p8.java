import java.util.*;
class Demo{
	public static void main(String[]args){

		Scanner sc=new Scanner(System.in);

		System.out.println("Enter number of planes");
		int plane=sc.nextInt();
		System.out.println("Enter number of rows");
		int rows=sc.nextInt();
		System.out.println("Enter number of cloumns");
		int col=sc.nextInt();
		
		int arr[][][] = new int[plane][rows][col];

		for(int i=0;i<plane;i++){
			for(int j=0;j<rows;j++){
				for(int k=0;k<col;k++){
					arr[i][j][k]=sc.nextInt();
				}
			}
		}
		for(int[][] x : arr){
			for(int[] y : x){
				for(int z:y){

				System.out.print(z + " ");
				}
				System.out.println();
			}
			System.out.println();
			
		}
	}

}

