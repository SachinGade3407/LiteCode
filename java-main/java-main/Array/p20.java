class Demo{

	void fun(int x,int y){
		System.out.println(x);
		System.out.println(y);
		x=x+10;
		y=y+20;
		System.out.println(x);
		System.out.println(x);
	}
	public static void main(String[]args){
		Demo obj = new Demo();
		int x=10;
		int y=20;
		System.out.println(x);
		System.out.println(y);
		obj.fun(x,y);
		System.out.println(x);
		System.out.println(y);
	}
}
