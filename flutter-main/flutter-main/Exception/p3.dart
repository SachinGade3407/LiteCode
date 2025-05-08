import 'dart:io';
void main(){
        int? x = int.parse(stdin.readLineSync()!);
        int? y = int.parse(stdin.readLineSync()!);
        double ans = x~/y;
        print(ans);


}

