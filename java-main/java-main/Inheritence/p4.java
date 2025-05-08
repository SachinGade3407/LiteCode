class Parent{
	int x=10;
	Parent(){
		System.out.println("In Parent Constructor");
	}
	void access(){
		System.out.println("In Parent Instance");
	}
}
class child extends Parent{
	int y=20;
	child(){
		System.out.println("In Child Constructor");
		System.out.println(x);
		System.out.println(y);
		//access();
	}
}
class client{
	public static void main(String[]args){
		child obj=new child();
		obj.access();
	}
}

