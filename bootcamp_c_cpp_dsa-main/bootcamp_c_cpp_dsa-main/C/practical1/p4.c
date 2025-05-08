/* wap in which according  to the month number printf the no. of days in that month */

#include<stdio.h>
void main(){
	 
	int x;

	printf("Enter number\n");
	scanf("%d",&x);

	switch(x){

		case 1:
			printf("January has 31 days\n");
			break;
		case 2:
			printf("february has 28 or 29 days\n");
                        break;
		case 3:
			printf("March has 31 days\n");
                        break;
		case 4:
			printf("April has 30 days\n");
			break;
		case 5:
			printf("May has 31 days\n");
			break;
		case 6:
			printf("June has 30 days\n");
			break;
		case 7:
			printf("july has 30 days\n");
			break;
		case 8:
			printf("August has 31 days\n");
			break;
		case 9:
			printf("september has 30 days\n");
			break;
		case 10:
			printf("Octomber has 31 days\n");
			break;
		case 11:
			printf("November has 30 days\n");
			break;
		case 12:
			printf("December has 31 days\n");
			break;
		default:
			printf("wrong input\n");
	}
}

