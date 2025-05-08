import java.io.*;
import java.net.*;
class Server{
	public static void main(String []args)throws IOException{
		ServerSocket ss = new ServerSocket(1200);
		Socket s = ss.accept();
		System.out.println("Connection Establish");
		OutputStream os = s.getOutputStream();
		PrintStream ps = new PrintStream(os);

		ps.println("Hello");
		ps.println("Go to hail");
		ps.close();
		s.close();
		ss.close();
	}
}

