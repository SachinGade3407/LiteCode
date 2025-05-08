/*  CompartToIgnore(string str);...It compare str1 & str(case insensetive);......parameter:string...return type: Integer*/

class Demo{
	public static void main(String[]args){
		String str1 = "Shashi";
		String str2 = "SHASHI";
		System.out.println(str1.compareToIgnoreCase(str2));
	}
}
