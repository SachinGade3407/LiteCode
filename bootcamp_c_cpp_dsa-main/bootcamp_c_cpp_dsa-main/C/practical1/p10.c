#include<stdio.h>
void main(){
	char va1,va2;
	int count = 0;

	
	
	
	printf("Enter any 2 character :\n");

	scanf(" %c ,%c",&va1,&va2);

	for(char i=va1;i<=va2;i++){
		count++;
		if(va1==va2){
			printf("va1=%c va2=%c\n",va1,va2);
		}
	}
	if(va1!=va2){
		printf("The difference %c and %c is : %d\n",va1,va2,count);
	}
}


