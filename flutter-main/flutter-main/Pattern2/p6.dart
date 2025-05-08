import 'dart:io';
void main () {
        int num=4;
        int row=num;
        int dec=2;
        for (int i=1; i<=num; i++, row--) {
                for(int j=0; j<row; j++,dec=dec+2) {
                        stdout.write ("${dec}   ");

                }
                print("");
        }
}


