class Demo {
	int x=10;
	static int y=20;
	void fun(){
		System.out.println(x);
		System.out.println(y);
	}
	int z=30;
	void gun(){
		fun();
	}
	public static void main(String[]args){
		Demo obj = new Demo();
		obj.fun();
	}
}

