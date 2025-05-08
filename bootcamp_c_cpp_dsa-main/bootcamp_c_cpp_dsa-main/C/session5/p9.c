//take no of rows from user
//         4
//      3  6
//   2  4  6
//1  2  3  4

#include<stdio.h>
void main(){
	int row;
	printf("enter rows\n");
	scanf("%d",&row);
        int num=row;

	for(int i=1;i<=row;i++){

		for(int sp=row;sp>=i;sp--){
			printf(" \t");
		}
                int num=row + 1 - i;
		for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num=num+num;
		
		}
	}
	printf("\n");
}
