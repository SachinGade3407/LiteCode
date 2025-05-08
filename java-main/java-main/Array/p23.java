class Demo{
	void fun(int arr[]){
		for(int x : arr){
			System.out.println(x);
		}
		for(int i=0;i<arr.length;i++){
			arr[i]=arr[i]+50;
		}
	}
	public static void main(String[]args){
		Demo obj = new Demo();
		int arr[]={50,100,150};
		obj.fun(arr);
		for(int x : arr){
			System.out.println(x);
		}
	}
}

