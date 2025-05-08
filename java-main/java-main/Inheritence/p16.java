interface A{
	int x=10;
}
interface B{
	int x=20;
}
class child implements A,B{
	int x=30;
	void fun(){
		System.out.println(x);
	}
}
class client{
	public static void main(String[]args){
		child obj=new child();
		obj.fun();
	}
}

