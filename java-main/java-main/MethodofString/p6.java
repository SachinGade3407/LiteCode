/*  Boolean equal(object anObject)..predicate which caompare and object to this .This is true only for string with the same character sequence\return true if an Object id sementicaly equal to this .parameter:Object(anObject)...return type:  boolean*/

class Demo{
	public static void main(String[]args){
		String str1 = "Shashi";
		String str2 = new String("Shashi");

		System.out.println(str1.equals(str2));
	}
}

