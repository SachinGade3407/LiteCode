import java.io.*;
class Demo{

	public static void main(String []ms)throws IOException{
	
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter rows: ");
		 int rows=Integer.parseInt(br.readLine());

              
		
		 char ch='A' ;
	      
        	 for(int i=1;i<=rows;i++){
	                   char temp=ch;
	
			 for(int j=1;j<=rows-i+1;j++){
				 System.out.print(temp +" ");
		
				 temp+=2;
			 }
		 ch++;
		 System.out.println();
		 } 
	}
}

/*
Enter rows: 
4
A C E G 
B D F 
C E 
D 
*/
