import 'dart:io';
void main(){
	File f = new File("C2W.txt");
	Future<String> str = f.readAsString();
	str.then((val)=>print("$val"));
}
