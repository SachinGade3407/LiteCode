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
}
class SortByName implements comparator(){
	public int compare(Object obj1,Object obj2){
		return ((Platform)obj1).str.compareTo(((Platform)obj2).str);
	}
}

class TreeMapDemo{
        public static void main(String[]args){

                TreeMap tm = new TreeMap(SortByName());

                tm.put(new Platform("Youtube",2005),"Google");
                tm.put(new Platform("facebook",20013),"Meta");
                tm.put(new Platform("Whatsap",2008),"Meta");
                tm.put(new Platform("ChatGPT",2022),"OpenAI");

                System.out.println(tm);
        }
}

