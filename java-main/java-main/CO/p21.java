class Demo{
	int x=10;
	Demo(){
		System.out.println("Constructor");
	}
	{
		System.out.println("In Instance Block1");
	}
	public static void main(String[]args){
		Demo obj = new Demo();
		System.out.println("Main");
	}
	{
		System.out.println("In Instance Block2");
	}
}





