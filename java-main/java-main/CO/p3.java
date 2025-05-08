class Demo{
	Demo(){
		System.out.println("In Core2Web");
	
	}
	int x=10;
	int y=20;
	public static void main(String[]args){
		System.out.println("In main");
		Demo obj = new Demo();
		System.out.println(obj.x);
		System.out.println(obj.y);
	}
}
