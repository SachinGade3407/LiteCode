/* synchronized String substring(int beginIndex,int endIndex)
 * parameter : Integer,String
 * return type : String*/

class Demo{
	public static void main(String[]args){
		StringBuffer str1 = new StringBuffer("Know The Code Till The Core");
		String str2 = str1.substring(14,27);
		System.out.println(str2);
	}
}

