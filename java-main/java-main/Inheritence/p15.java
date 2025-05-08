interface Demo{
	int x=10;
	void fun();
}
class Demochild implements Demo{
	public void fun(){
		System.out.println(x);
		System.out.println(Demo.x);
	}
}
class client{
	public static void main(String[]args){
		Demochild obj=new Demochild();
		obj.fun();
	}
}



