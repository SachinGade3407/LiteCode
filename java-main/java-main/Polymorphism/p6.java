class SingleTon{
	static SingleTon obj=new SingleTon();
	private SingleTon(){
		System.out.println("Constructor");
	}
	static SingleTon getobject(){
	return obj;
	}
}
class client{
	public static void main(String[]args){
		SingleTon obj1=SingleTon.getobject();
		System.out.println(obj1);

		SingleTon obj2=SingleTon.getobject();
		System.out.println(obj2);
		
		SingleTon obj3=SingleTon.getobject();
		System.out.println(obj3);
	}
}

