import 'dart:io';
void main()async{
	File f1 = new File("C2W.txt");
	File f2 = new File("xyz.txt");
	
	String data = f2.readAsStringSync().substring(0,8);
	print(data);
}
