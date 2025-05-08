import 'dart:io';
int fun(){
	print("In fun");
	return 10;
}
void main(){
	print("Enter value");
	int? data = int.parse(stdin.readLineSync()!);
	print(data);
	int ret = fun();
	print(ret);
	print("End main");
	
}

