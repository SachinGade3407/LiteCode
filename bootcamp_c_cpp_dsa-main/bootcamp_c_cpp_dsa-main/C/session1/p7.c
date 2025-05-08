#include<stdio.h>
void main(){

	int num=9;
	
	for(int i=3;i>=1;i--){

		for(int j=3;j>=1;j--){

			printf("%d",num);
			num--;
		}
		printf("\n");
	}
}
