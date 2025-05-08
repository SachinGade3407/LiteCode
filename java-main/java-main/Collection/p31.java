import java.util.*;
class HashSetDemo{
	public static void main(String[]args){
		HashSet hs = new HashSet();
		hs.add("Kanha");
		hs.add("Ashish");
		hs.add("Badhe");
		hs.add("Rahul");

		System.out.println(hs);

		HashMap hm = new HashMap();
		hm.put("Kanha","BMC");
		hm.put("Ashish","Infosys");
		hm.put("Badhe","Carpro");
		hm.put("Rahul","BMC");

		System.out.println(hm);
	}
}

