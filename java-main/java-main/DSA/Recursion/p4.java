class Demo{
	int fiboo(int num){
		if(num<=1)
			return num;
		return fiboo(num-1)+fiboo(num-2);
	}
	public static void main(String[]args){
		int num=8;
		Demo obj =new Demo();
		int retVal = obj.fiboo(num);
		System.out.println(retVal);
	}
}

