import 'dart:io';
void main()async{
	File f = new File("C2W.txt");
	f.delete();
	print("Deleted");
}
