//         1
//      1  2
//   1  2  3
//1  2  3  4

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int num=1;
		for(int sp=row;sp>i;sp--){
			printf(" \t");
		}

		for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}


