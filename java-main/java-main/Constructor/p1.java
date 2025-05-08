class Demo{
	int x = 10;
	Demo(){
		System.out.println("In Constructor");
		System.out.println(this);
		System.out.println(this.x);
	}
	void fun(){
		System.out.println(this);
		System.out.println(this.x);
	}
	public static void main(String[]args){
		Demo obj = new Demo();
		System.out.println(obj);
		obj.fun();
	}
}

