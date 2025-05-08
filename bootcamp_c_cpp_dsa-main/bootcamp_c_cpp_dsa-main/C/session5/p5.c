//         d
//      c  c
//   b  b  b
//a  a  a  a

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);
        int ch=row+96;
	for(int i=1;i<=row;i++){

		for(int sp=row;sp>i;sp--){

			printf(" \t");
		}
		for(int j=1;j<=i;j++){
			printf("%c\t",ch);
		}
		printf("\n");
		ch--;
	}
}
	
