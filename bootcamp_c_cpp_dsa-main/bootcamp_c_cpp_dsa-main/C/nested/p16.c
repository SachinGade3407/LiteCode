#include<stdio.h>
void main(){

	for(int i=1;i<=3;i++){

		for(int j=3-1;j>=i;j--){
			printf("  ");
		}

		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");

					
	}
}

