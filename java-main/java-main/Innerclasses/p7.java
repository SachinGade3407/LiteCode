class Parent{
	int x=10;
	void m1(){
		System.out.println("In Parent m1");
	}
}
class child extends Parent{
	int x=20;
	void m1(){
		System.out.println("In child-m1");
	}
}
class Demo{
	Demo(Parent p){
		System.out.println("In const Parent");
		p.m1();
	}
	Demo(child c){
		System.out.println("In child const m1");
		c.m1();
	}
	public static void main(String[]args){
		Demo obj=new Demo(new Parent());
		Demo obj1=new Demo(new child());
	}
}


