/* wap that takes a number from 0 to 5 and print its spelling*/
#include<stdio.h>
void main(){

        int x;

        printf("Enter number\n");
        scanf("%d",&x);

        switch(x){
		case 0:
			printf("Zero\n");
			break;

                case 1:
                        printf("One\n");
                        break;
                case 2:
                        printf("Two\n");
                        break;
                case 3:
                        printf("Three\n");
                        break;
                case 4:
                        printf("Four\n");
                        break;
                case 5:
                        printf("Five\n");
			break;
		default:
			printf("Wrong input\n");
	}
}
