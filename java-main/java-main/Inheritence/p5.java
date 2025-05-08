//static in parentclass...


class Parent{
	static{
		System.out.println("In Parent static block");
	}
}
class child extends Parent{
	static{
		System.out.println("IN child static block");
	}
}
class client{
	public static void main(String[]args){
		child obj=new child();
	}
}

