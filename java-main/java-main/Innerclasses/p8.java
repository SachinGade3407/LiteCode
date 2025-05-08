class Demo{
	Demo(){
		System.out.println("In const Demo");
	}
}
class Demochild extends Demo{
	Demochild(){
		System.out.println("const child Demo");
	}
}
class Parent{
	Parent(){
		System.out.println("const Parent");
	}
	Demo m1(){
		System.out.println("m1 Parent");
	}
}
class child extends Parent{
	child(){
		System.out.println("In child const");
	}
	Demochild m1(){
		System.out.println("m1 child");
	}
}
class client{
	public static void main(String[]args){
		Parent p=new child();
		p.m1();
	}
}





