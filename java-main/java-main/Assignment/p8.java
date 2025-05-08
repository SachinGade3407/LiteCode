import java.util.*;

class Demo{

	public static void main(String []args){
	
	int arr[]=new int []{3,6,16,32}	;

	Scanner sc=new Scanner(System.in);

	int num=sc.nextInt();
	for(int i=0;i<3;i++){
		if(arr[i]+arr[i+1]==num){
			System.out.print(i +" ");
			System.out.println(i+1);
		}

	}
	}
}

