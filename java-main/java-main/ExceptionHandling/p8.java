import java.io.*;
class Demo{
	public static void main(String[]args)throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String str=br.readLine();
		System.out.println(str);
		int data=Integer.parseInt(br.readLine());
		System.out.println(data);
	}
}
