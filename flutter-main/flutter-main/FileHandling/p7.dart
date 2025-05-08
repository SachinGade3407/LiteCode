import 'dart:io';
void main()async{
	File f = new File("C2W.txt");
	print(f.absolute);	
	print(f.path);
		
	final data = await f.length();
	print(data);
	
	final value = f.length();
	value.then((val)=>print(val));
}
