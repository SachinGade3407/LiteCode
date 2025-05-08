#include<stdio.h>
void main(){
	 int rows;

	 printf("Enter rows\n");
	 scanf("%d",&rows);

	 for(int i=1;i<=rows;i++){
		 char ch = 'A';
		 for(int sp=rows-1;sp>=i;sp--){
			 printf("_ ");
		 }
		 for(int j=1;j<=i;j++){
			 printf("%c ",ch);
			 ch++;
		 }
		 printf("\n");
	 }
}
