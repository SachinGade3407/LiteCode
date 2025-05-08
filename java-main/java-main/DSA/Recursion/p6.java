class Demo{
	String revString(String str){
		if(str == null str.length()<=1){
			return str;
		}
		return revString(str.subString(1))+str.chatAt(0);
	}
	public static void main(String[]args){
		String  str = "Core2web";
		StringRev obj = new StringRev();
		String reverse = obj.revString(str);
	}
}

