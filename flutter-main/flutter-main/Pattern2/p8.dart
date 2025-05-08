import 'dart:io';
void main () {
        int num=4;
        int row=num;
        for (int i=1; i<=num; i++, row--) {
        	int dec=1;
                for(int j=0; j<row; j++,dec=dec+i) {
                        stdout.write ("${dec}  ");

                }
                print("");
        }
}


