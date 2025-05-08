//1  2  3  4
//   2  3  4
//      3  4
//         4

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);

	int num=1;
	for(int i=1;i<=row;i++){

		for(int sp=1;sp<i;sp++){
			printf(" \t");
		}
		num=i;
		for(int j=row;j>=i;j--){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}


