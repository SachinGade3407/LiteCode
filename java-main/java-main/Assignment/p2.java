/* 
 *      
 *
 *
 *
 */
import java.io.*;
class Demo{

	public static void main(String []args)throws IOException{
	
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter rows: ");
		 int rows=Integer.parseInt(br.readLine());

		         char ch='E';
                         char ch1='a';

		 for (int i=rows;i>=1;i--){             
		 
			 for(int j=rows;j>i;j--){
			 
				 System.out.print(" ");
			 }
				 for(int k=1;k<=i;k++){
					 if(i==2){
					 if(k==1 ||k ==3){
						 System.out.print(ch--);
						 
					 }
					 else{
                                         System.out.print(ch1++);
					 }
					 }
				 }
				 System.out.println();
		 }
	}
}
		 
