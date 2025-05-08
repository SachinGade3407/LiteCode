//         D
//      c  D
//   B  c  D
//a  B  c  D

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);
        
	for(int i=1;i<=row;i++){

		for(int sp=row;sp>i;sp--){
			printf(" \t");
		}
           	int ch=row+64;

		for(int j=1;j<=i;j++){
			if(i%2==1){
				printf("%c\t",ch+32);
				ch++;
			}else{
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
		ch--;
	}
}
