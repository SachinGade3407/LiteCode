//100   9   64   7
//      36  5    16
//          3    4
//               1

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);
	int sum=0;

	for(int i=1;i<=row;i++){
		sum =sum+i;
	}

	for(int i=1;i<=row;i++){

		for(int sp=1;sp<i;sp++){
			printf(" \t");
		}

		for(int j=row;j>=i;j--){
			if(j%2==1){
				printf("%d\t",sum);
				sum--;
			}else{
				printf("%d\t",sum*sum);
				sum--;
			}
		}
		printf("\n");
	}
}

