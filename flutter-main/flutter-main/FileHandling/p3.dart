import 'dart:io';
void main(){
        File f = new File("C2W.txt");
        print(f.runtimeType);
        print(f.create());
        print("File Created");
}

