import 'dart:io';
void main() async{
        File f = new File("C2W.txt");
        print(f.runtimeType);
        await f.create();
        print("File Created");
}

