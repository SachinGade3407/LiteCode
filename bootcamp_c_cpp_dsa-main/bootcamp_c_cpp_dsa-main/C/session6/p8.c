//D  D  D  D
//   c  c  c
//      B  B
//         a

#include<stdio.h>
void main(){
	int row;
	printf("enter row:\n");
	scanf("%d",&row);
	int inc=0;

	for(int i=1;i<=row;i++){

		for(int sp=1;sp<i;sp++){
			printf("  ");
		}
		int num=64+row-inc;
		for(int j=row;j>=i;j--){
			if(i%2==1){
		        	printf("%c ",num);
			}else{
				printf("%c ",num+32);
			}
		}
		printf("\n");
		inc++;
	}
}



