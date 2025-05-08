class Demo{

	static int x=10;
	static int y=20;

	void fun(){
		System.out.println("In fun method");
	}
	static void gun(){
		System.out.println("In gun method");
	}
	public static void main(String[]args){
		Demo obj = new Demo();
		System.out.println(x);
		System.out.println(y);
		obj.fun();
		obj.gun();
	}
}


