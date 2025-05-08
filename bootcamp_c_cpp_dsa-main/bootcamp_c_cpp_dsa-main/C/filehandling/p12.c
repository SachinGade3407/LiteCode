//fputs


#include<stdio.h>
void main(){

	FILE *fp=fopen("success.txt","a");
	char compName[20]="UNACEDEY";
	fputs(compName,fp);
}

