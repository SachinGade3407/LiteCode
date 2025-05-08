import java.awt.*;
import java.net.*;
import java.io.*;

class Openwebsite{
	public static void main(String[]args)throws IOException,URISyntaxException{
		URI obj=new URI("https://chat.openai.com");
		Desktop desk = Desktop.getDesktop();
		desk.browse(obj);
	}
}

