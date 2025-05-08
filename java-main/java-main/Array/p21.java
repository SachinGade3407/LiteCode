class Demo{
	void fun(int xarr[]){
		for(int x : xarr){
			System.out.println(x);
		}
	}

	public static void main(String[]args){
		Demo obj = new Demo();
		int arr[]={10,20,30,40,50};
		for(int x : arr){
			System.out.println(x);
		}
		obj.fun(arr);
	}
}

