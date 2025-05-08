#include<stdio.h>
void main(){

	int rows,num;

	printf("Enter num of rows:");
	scanf("%d",&rows);

	printf("Enter any num:");
        scanf("%d",&num);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){

			if(i%2 !=0){
				printf("%d ",num);
			}else{
				printf("%d ",num*num);
			}
			num++;
		}
		printf("\n");
	}
}


