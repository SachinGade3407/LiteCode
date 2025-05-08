//         4
//      4  3
//   4  3  2
//4  3  2  1

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){

		for(int sp=row;sp>i;sp--){
			printf(" \t");
		}
		int num=row;
		for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num--;
		}
		printf("\n");

	}
}
