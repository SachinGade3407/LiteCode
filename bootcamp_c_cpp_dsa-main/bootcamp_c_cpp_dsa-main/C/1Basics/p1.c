#include<stdio.h>
void main (){
	char ch1, ch2;

	printf("Enter start\n");
	scanf("%c",&ch1);

	printf("Enter end\n");
	scanf("%c",&ch2);

	for(char i=ch1;i<=ch2;i++){
		printf("%c",i);
	}
}
