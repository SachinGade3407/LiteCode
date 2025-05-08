interface Demo{
	static void fun(){
		System.out.println("In fun");
	}
}
class Demochild implements Demo{
	void fun(){
		System.out.println("In Demo child");
		Demo.fun();
	}
}
class client{
	public static void main(String[]args){
		Demochild obj=new Demochild();
		obj.fun();
	}
}

