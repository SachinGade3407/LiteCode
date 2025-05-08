/* intindexOf(string str,int fromIndex)
  parameter : string(str String to find)
  integer(fromindex to start the search)
  return type:Integer(location(base 0)of the String ,or -1 if not found)*/


class Demo{
	public static void main(String[]args){
		StringBuffer str1 = new StringBuffer("Core2Web");
		System.out.println(str1.indexOf("e"));
	}
}
