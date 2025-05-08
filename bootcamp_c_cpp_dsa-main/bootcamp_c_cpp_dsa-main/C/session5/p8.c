//            5
//         5  6
//      5  4  3
//   5  6  7  8
//5  4  3  2  1

#include<stdio.h>
void main(){
	int row;
	printf("enter row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){

		for(int sp=row;sp>i;sp--){
			printf(" \t");
		}
		int num=row;
		for(int j=1;j<=i;j++){
			if(i%2==1){
				printf("%d\t",num);
				num--;
			}else{
				printf("%d\t",num);
				num++;
			}
		}
		printf("\n");
	}
}
