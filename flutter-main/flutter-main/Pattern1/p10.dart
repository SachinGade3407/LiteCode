import 'dart:io';
void main () {
	int odd=1;
	int even=2;
	int i=1; 
	while (i<=4) {
		int j=1;
		while (j<=4) {
			if (i%2 != 0) {
				stdout.write ("$odd    ");
				odd=odd+2;
			}else{
				stdout.write ("$even    ");
				even=even+2;
			}
			j++;
		}
	i++; 
	odd=odd-2;
	even=even-2; 
	print("");
	}
}

