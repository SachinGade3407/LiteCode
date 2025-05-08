import 'dart:io';
void main(){
	int? x;
	try{
		x = int.parse(stdin.readLineSync()!);
		print(x);
	}
	on FormatException{
		print("WrongI/P");
	}catch(ex){
		print("Generic");
	}
	print("End code");
}

