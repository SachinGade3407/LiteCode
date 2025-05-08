#include<stdio.h>
void main(){

	int rows;
	int x;
	printf("Enter rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=rows;j++);
		int count=0;
		for(int k=1;k<=x;k++){
			if(x%k==0){

				count=count+i;
			}
			if(count==2){
				printf("%d",x);
				x++;
			}
		}
		printf("\n");
	}
}

