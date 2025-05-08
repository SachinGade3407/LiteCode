class Demo extends Exception{
	Demo(String str){
		super(str);
	}
}
class Parent{
	Parent(){
		System.out.println("In Parent Constructor");
	}
	void M1()throws Demo{
		System.out.println("In Parent M1");
		throw new Demo("Exception");
	}

}
class child extends Parent{
	child(){
		System.out.println("In Child Constructor");
	}
	void M1(){
		System.out.println("In Child M1");
	}

}
class client{
	public static void main(String []args){
		Parent p = new child();
		try{
			p.M1();
		}catch(Demo d){
			System.out.println(d);
		}

	}
}



		
