//A   b   C   d
//    e   G   i
//        K   n
//            q

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);

	int num=65;
	for(int i=1;i<=row;i++){

		for(int sp=1;sp<i;sp++){
			printf("  ");
		}

		for(int j=row;j>=i;j--){
			if(i%2==1){

			if(j%2==1){
				printf("%c ",num);
				num++;
			}else{
				printf("%c ",num+32);
				num++;
			}
			}else{

		}
		printf("\n");
		}
	}
}
