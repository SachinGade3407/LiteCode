/*Write a dart program that takes a number from 0 to 5 and
prints its spelling, if the number is greater than 5 print
entered number is greater than 5
Input : var4= 4
Output : four*/

import "dart:io";

void main() {
  	print("Enter a number from 0 to 5:");
  	int number = int.parse(stdin.readLineSync()!);

  	if (number >= 0 && number <= 5) {
    		switch (number) {
      			case 0:
        			print("zero");
        			break;
      			case 1:
        			print("one");
        			break;
      			case 2:
        			print("two");
        			break;
      			case 3:
        			print("three");
        			break;
      			case 4:
        			print("four");
        			break;
      			case 5:
        			print("five");
        			break;
    				}
  			} else {
    				print("Entered number is greater than 5.");
  	}
}

