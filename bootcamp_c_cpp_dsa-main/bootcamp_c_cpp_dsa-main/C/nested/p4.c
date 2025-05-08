#include<stdio.h>
void main(){
	int i,j;

	for(i=1;i<=4;i++){
		int x=1;
		for(j=1;j<=4;j++){

			printf("%d ",x*x);
			x++;
		}
		printf("\n");

	}
}
