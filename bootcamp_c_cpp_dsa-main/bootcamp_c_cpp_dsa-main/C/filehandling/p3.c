// fprintf..


#include<stdio.h>
void main(){

	FILE *fp=fopen("C2W.txt","w");
	fprintf(stdout,"File handling by C2W");
	fprintf(fp,"File handling by C2W");
}

