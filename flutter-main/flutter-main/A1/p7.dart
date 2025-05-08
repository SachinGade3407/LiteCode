/*Write a dart program, in which according to month no print
the no. of days in that month*/


import "dart:io";

void main() {
	print("Enter a month number (1-12):");
  	int month = int.parse(stdin.readLineSync()!);

  	if (month >= 1 && month <= 12) {
    		int daysInMonth = 0;

    		switch (month) {
      			case 1:
      			case 3: 
      			case 5: 
      			case 7: 
    			case 8: 
      			case 10:
      			case 12:
        			print("daysInMonth = 31");
        			break;

      			case 4: 
		      	case 6: 
      			case 9: 
      			case 11: 
        			print("daysInMonth = 30");
        			break;	

      			case 2:
        			print("Enter the year:");
        			int year = int.parse(stdin.readLineSync()!);

        		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
          			print("daysInMonth = 29");
        		} else {
          			print("daysInMonth = 28");        		}
        			break;
    		}

    			print("Number of days in month month: daysInMonth");
  		} else {
    			print("Invalid month number. Please enter a number between 1 and 12.");
 	 }
}

