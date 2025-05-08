class Demo{
	String str;
	Demo(String str){
		this.str=str;
	}
	public String toString(){
		return str;
	}
	public void finalise(){
		System.out.println("Notify");
	}
}
class GCDemo{
	public static void main(String[]args){
		Demo obj1=new Demo("C2W");
		Demo obj2=new Demo("Bincaps");
		Demo obj3=new Demo("Incubetors");
	
		
		System.out.println(obj1);
		System.out.println(obj2);
		System.out.println(obj3);

		obj1=null;
//		obj2=null;

		System.gc();

		System.out.println("In main");
	}
}

		

