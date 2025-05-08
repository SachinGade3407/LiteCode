import 'dart:io';
void main () {
        int num=4;
        int row=num;
	int dec=0;
        for (int i=1; i<=num; i++, row--) {
                for(int j=0; j<row; j++,dec++) {
                        stdout.write ("${10-dec}  ");

                }
                print("");
        }
}


