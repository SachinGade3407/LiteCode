class Demo {
	static {
		System.out.println("Static Block1");
	}
	public static void main(String[]args){
		System.out.println("In main");
	}
}
class client {
	static {
		System.out.println("Static Block2");
	}
	public static void main(String[]args){
		System.out.println("Static Block2");
		Demo obj = new Demo();
	}
	static {
		System.out.println("Static Block3");
	}
}

