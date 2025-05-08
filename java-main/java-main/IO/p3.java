import java.io.*;
import java.util.*;

class Demo{

	public static void main(String[]args)throws IOException{

		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Society Name,Wing,Flat no");
		String info = br.readLine();	
		System.out.println(info);
		StringTokenizer obj= new StringTokenizer(info," ");
		String token1=obj.nextToken();
		String token2=obj.nextToken();	
		String token3=obj.nextToken();
		System.out.println("Enter Society="+ token1);
		System.out.println("Enter Society="+ token2);
		System.out.println("Enter Society="+ token3);
	}
}
		
		
		
	
	
	
			
		
		
	
	
	
	
	
	
		
	
		
		
	
	
