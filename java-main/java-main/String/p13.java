//To charArray...

class Demo{
	static int mystrlen(String str1){
		char arr[] = str1.toCharArray();
		int count=0;
		for(int i=0;i<arr.length;i++){
			count++;
		}
		return count;
	}

	public static void main(String[]args){
		String str1 = "Sachin";
		char arr[] = str1.toCharArray();
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i]);
		}
		//System.out.println(str1.length(str1));
		int len = mystrlen(str1);
		System.out.println(len);
	}
}


