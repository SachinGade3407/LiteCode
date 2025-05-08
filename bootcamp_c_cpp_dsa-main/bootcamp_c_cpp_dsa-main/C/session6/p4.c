//d  d  d  d
//   c  c  c
//      b  b
//         a

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);
        int num=row+96;
	for(int i=1;i<=row;i++){

		for(int sp=1;sp<i;sp++){
			printf(" \t");
		}
		for(int j=row;j>=i;j--){
			printf("%c\t",num);
		}
		printf("\n");
		num--;
	}

}

