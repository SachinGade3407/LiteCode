//static Inner class...


class Outer{
	static class Inner{
		void m1(){
			System.out.println("In m1");
		}
	}
}
class client{
	public static void main(String[]args){
		Outer.Inner obj1=new Outer.Inner();
		obj1.m1();
	}
}
