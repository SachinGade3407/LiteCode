import 'dart:io';
void main () {
        int num=4;
        int row=num;
        for (int i=1; i<=num; i++, row--) {
        	int dec=4;
                for(int j=0; j<row; j++,dec=dec+row) {
                        stdout.write ("${dec}  ");

                }
                print("");
        }
}

