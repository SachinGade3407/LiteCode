class Demo{
	public static void main(String[]args){
		String var1 = "This is a String";
		String var2 = "A string";
		String var3 = "This is " + var2;
		if(System.identityHashCode(var1)==System.identityHashCode(var3)){
			System.out.println("Equal");
		}else{
			System.out.println("Unequal");
		}


	}
}
