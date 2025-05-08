import java.util.*;
import java.io.*;
class PropertiesDemo{
	public static void main(String[]args)throws IOException{

		Properties obj = new Properties();

		FileInputStream fobj=new FileInputStream("friends.Properties");

		obj.load(fobj);

		String name=obj.getProperty("Ashish");

		System.out.println(name);

		obj.setProperty("Shashi","Binecaps");

		FileOutputStream outobj=new FileOutputStream("friends.Properties");

		obj.store(outobj,"Update by Shashi");
	}
}


