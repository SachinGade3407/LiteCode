//HashCode


class Demo{

	public static void main(String[]args){
		String str1 = "Sachin";
		String str2 = new String("Sachin");
		String str3 = "Sachin";
		String str4 = new String("Sachin");

		System.out.println(str1.hashCode());
		System.out.println(str2.hashCode());
		System.out.println(str3.hashCode());
		System.out.println(str4.hashCode());
	}
}

