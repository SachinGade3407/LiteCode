import java.util.*;

class Demo{

	static void fun(){
		System.out.println("In fun method");
	}
	static void gun(){
		System.out.println("In gun method");
	}

	static int x=10;
	static int y=20;

	public static void main(String[]args){
		System.out.println(x);
		System.out.println(y);
		fun();
		gun();
	}
}
