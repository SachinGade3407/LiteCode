import java.util.*;
class Platform implements Comparable{
	
	String str = null;
	int foundYear=0;

	Platform(String str, int foundYear){
		this.str=str;
		this.foundYear=foundYear;
	}
	public String toString(){
		return "{" + str + ":" + foundYear + "}";
	}
	public int compareTo(Object obj){
		return this.foundYear - ((Platform)obj).foundYear;
	}
}
class TreeMapDemo{
	public static void main(String[]args){
		
		TreeMap tm = new TreeMap();
		
		tm.put(new Platform("Youtube",2005),"Google");
		tm.put(new Platform("facebook",20013),"Meta");
		tm.put(new Platform("Whatsap",2008),"Meta");
		tm.put(new Platform("ChatGPT",2022),"OpenAI");

		System.out.println(tm);
	}
}


