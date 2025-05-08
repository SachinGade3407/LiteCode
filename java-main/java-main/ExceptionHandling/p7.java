class Demo{
	public static void main(String[]args){
		System.out.println("Start main");
		try{
			System.out.println(10/0);
		}catch(ArithmeticException obj){
			System.out.println("Exception Occured");
		}
		System.out.println("End main");
	}
}
