//4  3  2  1
//   3  2  1
//      2  1
//         1

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);
	int inc=0;

	for(int i=1;i<=row;i++){

		for(int sp=1;sp<i;sp++){
			printf(" \t");
		}
		int num=row-inc;
		for(int j=row;j>=i;j--){
			printf("%d\t",num);
			num--;
		}
		printf("\n");
		inc++;
	}
}

