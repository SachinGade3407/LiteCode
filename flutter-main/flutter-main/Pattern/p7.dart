import 'dart:io';
void main () {
        int store=1;
        for (int i=1; i<=4; i++) {
                for (int j=1; j<=i; j++) {
                        stdout.write ("$store    ");
			store=store+2; 
		}
		if (i != 1) {
			store=store-2;
		} 
                print("");
        }
}

