import 'dart:io';
void main () {
        for (int i=1; i<=5; i++) {
                for (int j=1; j<=i; j++) {
			int mul=i*j; 
                        stdout.write ("$mul  ");
                }
                print("");
        }
}

