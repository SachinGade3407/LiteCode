interface Demo1{
	default void fun(){
		System.out.println("In Fun Demo1");
	}
}
interface Demo2{
	default void fun(){
		System.out.println("In Fun Demo2");
	}
}
class Demochild implements Demo1,Demo2{
	public void fun(){
		System.out.println("In Fun-Demochild");
	}
}
class client{
	public static void main(String[]args){
		Demochild obj = new Demochild();
		obj.fun();
		
		Demo1 obj = new Demochild();
		obj1.fun();
		
		Demo2 obj = new Demochild();
		obj2.fun();
	}
}


