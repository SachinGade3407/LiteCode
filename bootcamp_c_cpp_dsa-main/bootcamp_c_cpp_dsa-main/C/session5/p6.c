//           1
//      4    7
//10   13   16

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);

	int num=1;
	for(int i=0;i<=row;i++){

		for(int sp=row;sp>i;sp--){
			printf(" \t");
		}
		for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num=num+row;
		}
		printf("\n");
	}
}


