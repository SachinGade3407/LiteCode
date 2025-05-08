class Demo{
	public static void main(String[]args){
		String str1 = "Kanha";
		String str2 = "Kanha";
		String str3 = new String("Kanha");
		String str4 = new String("Rahul");
		String str5 = new String("Kanha");
		String str6 = "Kanha";

		System.out.println(System.identityHashCode(str1));
		System.out.println(System.identityHashCode(str2));
		System.out.println(System.identityHashCode(str3));
		System.out.println(System.identityHashCode(str4));
		System.out.println(System.identityHashCode(str5));
		System.out.println(System.identityHashCode(str6));
	}
}
