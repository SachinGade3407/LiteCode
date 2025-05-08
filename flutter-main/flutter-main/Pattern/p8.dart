import 'dart:io';
void main () {
	int num=5;
	for (int i=1; i<=5; i++) {
		int mul=1;
		for (int j=1; j<=i; j++) {
			if (j==1) {
				stdout.write("$num    ");	
			}else {
				int newnum = num + (i*mul);
				stdout.write("$newnum    ");
				mul++;
			} 
		}
		print("");
		num++;
	}
}

