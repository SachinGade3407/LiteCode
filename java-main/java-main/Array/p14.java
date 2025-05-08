//Foreachloop


class Demo{

	public static void main(String[]args){
		int arr[]={10,20,30,40,50};
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i]);
		}
		for(int var : arr){
			if(var%6==0){
				continue;
			}
			System.out.println(var);
		}
	}
}


