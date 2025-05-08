/*Write a dart program to check if a character is a vowel or
consonant.

Input: var=”A”;
Output: A is a vowel.

Input: var=”D”;
Output: D is a consonant.*/

import "dart:io";

void main() {
	  print("Enter a character:");
 	String input = stdin.readLineSync()!.toUpperCase(); 

  	if (input.length == 1 && input.contains(RegExp(r"[A-Z]"))) {
    		if (input == "A" || input == "E" || input == "I" || input == "O" || input == "U") {
      			print("input is a vowel.");
    	} else {
      		print("input is a consonant.");
    			}
  	} else {
    	print("Invalid input. Please enter a single alphabetical character.");
  	}
}

