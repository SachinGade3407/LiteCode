import 'dart:io';
void main(){
	int? x;
	try{
		print("Connection open");
		x = int.parse(stdin.readLineSync()!);
		print(x);
	}
	on FormatException{
		print("wrong I/P");
	}catch(ex){
		print("Generic");
	}finally{
		print("Connection close");
	}
}
