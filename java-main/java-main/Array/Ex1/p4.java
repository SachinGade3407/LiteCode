/*Write a program, take 7 characters as an input , Print only vowels from the array*/

import java.io.*;
class Demo {
    public static void main(String[] args)throws IOException {
	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	    System.out.println("Enter array size:");

	    int size=Integer.parseInt(br.readLine());

	    char arr[]=new char[size];

	    System.out.println("Enter array elements:");

	    for(int i=0;i<size;i++){
		    arr[i]=(char)br.read();
		    br.skip(1);
	    }
	    System.out.println("Vowels are:");
	    for(int i=0;i<size;i++){
		    if(arr[i]=='a' || arr[i]=='A'||arr[i]=='e' ||arr[i]=='E' ||arr[i]=='i' ||arr[i]=='I' ||arr[i]=='o' ||arr[i]=='O' ||arr[i]=='u' ||arr[i]=='U'){
			    System.out.println(arr[i]);
		    }
	    }
    }
}
      
