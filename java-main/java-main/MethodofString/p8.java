/*  int lastIndexOf(String str,int fromIndex)
    parameter : String(str String to find) 
              : integer (fromIndex index to strat the search)
	      Return type : Integer (location(base 0)pf the string, or -1 if not found)
	      */

class Demo{
	public static void main(String[]args){
		StringBuffer str1 = new StringBuffer("Core2Web");
		System.out.println(str1.lastIndexOf("e"));
	}
}
