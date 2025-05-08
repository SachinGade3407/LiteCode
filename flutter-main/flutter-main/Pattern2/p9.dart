import 'dart:io';
void main () {
        int num=4;
        int row=num;
        for (int i=1; i<=num; i++, row--) {
        	int dec=i;
                for(int j=1; j<=row; j++, dec++) {
                        stdout.write ("${dec}  ");

                }
                print("");
        }
}

