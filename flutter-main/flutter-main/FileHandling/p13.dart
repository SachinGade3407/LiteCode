import 'dart:io';
void main()async{
	File f  = new File("C2W.txt");	
	f.writeAsStringSync("Course Flutter",mode:
	FileMode.append);
}
