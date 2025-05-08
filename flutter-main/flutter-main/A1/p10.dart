/*Write a dart program to calculate electricity bill of a house based
on following criteria
For first 90 units: No charge
90 to 180 units: 6 rupees per unit
180 to 250 units: 10 rupees per unit
Above 250 units : 15 rupees per unit
Input: 90
Output: 540
Input:120
Output:720*/

import "dart:io";

	void main() {
  	print("Enter the number of units:");
  	int units = int.parse(stdin.readLineSync()!);

  	double totalBill = 0.0;

  	if (units <= 90) {
    		totalBill = 0;
  	} else if (units <= 180) {
    		totalBill = (units - 90) * 6;
  	} else if (units <= 250) {
    		totalBill = (90 * 6) + (units - 180) * 10;
  	} else {
    		totalBill = (90 * 6) + (70 * 10) + (units - 250) * 15;
  	}

  		print("Total electricity bill: ${totalBill.toStringAsFixed(2)} rupees");
}

