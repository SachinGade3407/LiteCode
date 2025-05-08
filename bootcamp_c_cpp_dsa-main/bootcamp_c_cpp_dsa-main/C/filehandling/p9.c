//getw function


#include<stdio.h>
void main(){

	FILE *fp=fopen("success.txt","r");
	printf("%c\n",fgetc(fp));
	char ch;
	while((ch=fgetc(fp))!=EOF){
		int count=0;
		printf("%c\n",ch);
/*        int count =0;
	while(fgetc(fp)!=EOF){
		count++;
	
	printf("%d\n",count);*/
	}
}
