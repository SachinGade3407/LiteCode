class Double{
	int fun(int num){
		if(num<=1)
			return -1;
		return fun(num-2)+ fun(num-1);
	}
	public static void main(String[]args){
		Double obj =new Double();
		int ret=obj.fun(2);
		System.out.println(ret);
	}
}

