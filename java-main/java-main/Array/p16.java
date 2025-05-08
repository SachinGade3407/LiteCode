//passing array as an argument.


class Demo{
	
	int  fun(int x){
		int val=x+15;
		return val;
	}
	public static void main(String[]args){
		Demo obj = new Demo();
		int ret=obj.fun(10);
		System.out.println(ret);
	}
}

