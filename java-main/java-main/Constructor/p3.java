//Method Signature.........


class Demo{
	int x = 10;
	Demo(){
		this();
		System.out.println("In Constructor");
	}
	Demo(int x){
		System.out.println("In Para Constructor");
	}
	public static void main(String[]args){
		Demo obj = new Demo();
		Demo obj1 = new Demo(10);
	}
}

