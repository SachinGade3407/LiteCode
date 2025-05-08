class Parent{
	int x=10;
	static int y=20;
	Parent(){
		System.out.println("In Parent const");
	}
	void m1(){
		System.out.println("m1");
	}
	void m2(){
		System.out.println("m2");
	}
}
class child extends Parent{
	int x=40;
	static int b=50;
	child(){
		System.out.println("In child const");
	}
	void m1(){
		System.out.println("m1");
	}
	void m3(){
		System.out.println("m3");
	}
}
class client{
	public static void main(String[]args){
		Parent obj=new Parent();
		obj.m1();
		obj.m2();
		child obj2=new child();
		obj2.m1();
	}
}





