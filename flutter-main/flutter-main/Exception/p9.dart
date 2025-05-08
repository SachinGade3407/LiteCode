import 'dart:io';
void main(){
	int empCount = int.parse(stdin.readLineSync()!);
	String name = stdin.readLineSync()!;
	int profit = int.parse(stdin.readLineSync()!);
	try{
		if(profit < 0){
			throw new FormatException();
			}
		}on FormatException{
			print("Laksh de");
		}catch (data){
			print("Generic");
		}
		print("EmpCount=$empCount , Name=$name , Profit=$profit");
}
