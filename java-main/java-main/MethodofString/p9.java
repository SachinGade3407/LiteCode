/* synchronized StringBuffer replace(int start,int end ,string str)
 * parameter : Integer,Stinrg
 * Return type : StringBuffer*/

class Demo{
	public static void main(String[]args){
		StringBuffer str1 = new StringBuffer("Know The Code Untill The core");
		System.out.println(str1);
		str1.replace(14,20,"Till");
		System.out.println(str1);
	}
}

