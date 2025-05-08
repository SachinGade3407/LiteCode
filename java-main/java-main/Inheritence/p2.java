class Parent{
	Parent(){
		System.out.println("In Parent Constructor");
		System.out.println(this);
	}
	void parentProperty(){
		System.out.println("Flat,Car,Gold");
	}
}
class Child extends Parent{
	Child(){
		System.out.println("In Child Constructor");
		System.out.println(this);
	}
}
class Demo{
	public static void main(String[]args){
		Child obj = new Child();
		System.out.println(obj);
		obj.parentProperty();
	}
}

