import 'dart:io';	
void main()async{
	Directory dir = new Directory("Dart/Phase1"); 
	print(dir.path);
	print(dir.absolute);
	dir.delete(recursive : true);
}
