Interface Demo{
	void fun();
	void gun();
}
class Demochild implements Demo{
	public static fun(){
		System.out.println("In fun");
	}
	public static gun(){
		System.out.println("In gun");
	}
}
class client{
	public static void main(String[]args){
		Demo obj=new Demochild();
		obj.fun();
		obj.gun();
	}
}


