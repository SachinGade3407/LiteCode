import java.io.*;
class Demo{
	void m1(){
		System.out.println("In m1");
	}
	void m2(){
		System.out.println("In m2");
	}
	public static void main(String[]args)throws IOException{
		 Demo obj = new Demo();
		 obj.m1();
		 obj=null;
		 try{
			 obj.m2();
		 }catch(NullPointerException obj1){
			 System.out.println("Here");
		 }finally{
			 System.out.println("Connection closed");
		 }
	}
}



