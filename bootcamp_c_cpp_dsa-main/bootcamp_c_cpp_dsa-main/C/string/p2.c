#include<stdio.h>
void main(){

	char pName[]={'R','O','H','I','T','S','\0','V','A','D','A'};

	char *Name="Virat";

	printf("%ld",sizeof (pName));
	puts(pName);

	for(int i=0;i<11;i++){

		printf("%c",pName[i]);
	}
	printf("\n");
	for(int i=0;i<7;i++){
		printf("%c",Name[i]);
	}
}
