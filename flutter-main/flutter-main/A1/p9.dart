/*Create a dart program to calculate the ticket price for the
upcoming Cricket World Cup*/

import "dart:io";

void main() {
  	print("Enter the stand type:");
  	print("1. Upper Stand");
  	print("2. Middle Stand");
  	print("3. Lower Stand");
  	print("4. Other Stand");
  
  	int standType = int.parse(stdin.readLineSync()!);

  	double ticketPrice = 0.0;

  	switch (standType) {
    		case 1:
      			print(ticketPrice = 2000);
      			break;
    		case 2:
      			print(ticketPrice = 3000);
      			break;
    		case 3:
      			print(ticketPrice = 7000);
      			break;
    		default:
     			 print(ticketPrice = 2500);
      			break;
  		}

  		print("Please pay ${ticketPrice.toStringAsFixed(0)} rupees.");
	
}

