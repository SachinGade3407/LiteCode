/*Write a dart program, take a number and print whether it is
positive or negative.
Input: var=5
Output: 5 is a positive number
Input: var=-9
Output: -9 is a negative number*/

import "dart:io";

void main() {
  	print("Enter a number:");
 	 int number = int.parse(stdin.readLineSync()!);

  	if (number > 0) {
    		print("number is a positive number.");
  	} else if (number < 0) {
    		print("number is a negative number.");
  	} else {
    		print("The number is zero.");
  	}
}

