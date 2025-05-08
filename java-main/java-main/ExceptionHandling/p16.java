import java.util.Scanner;
class DataOverFlowException extends RuntimeException{
	DataOverFlowException(String msg){
		super(msg);
	}
}
class DataUnderFlowException extends RuntimeException{
	DataUnderFlowException(String msg){
		super(msg);
	}
}
class ArrayDemo{
	public static void main(String[]args){
		int arr[]=new int[5];
		Scanner sc=new Scanner(System.in);
		System.out.println("Integer Value");
		for(int i=0;i<arr.length;i++){
			int data=sc.nextInt();
			if(data < 0){
				throw new DataUnderFlowException("Mitra Data 100 peksha chota ahee");
			}
			if(data > 100){
				throw new DataOverFlowException("Mitra Data 100 peksha mota ahee");
				}
				arr[i]=data;
			}
			for(int i=0;i<arr.length;i++){
					System.out.println(arr[i]+ "");
			}
	}
}
				
