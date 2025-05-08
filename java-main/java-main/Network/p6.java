import java.io.*;
import java.net.*;
import java.util.*;
class URLConnectionDemo{
	public static void main(String[]args){
		URL obj = new URL("https://www.youtube.com/playlist?list=PLiOIhBfKi8AIYNWEjYy1zZFe1N8GvPRHR");
		URLConnection conn = obj.openConnection();
		System.out.println("Last Modified"+ new Data(conn.getLastModified()));
	}

}

