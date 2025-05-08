import 'dart:io';
void main(){
	print("Start main");
	print("Enter value");
	try{
		int? val = int.parse(stdin.readLineSync()!);
		print(val);
		}catch(ex){
			print(ex);
		}
	print("End main");
}
