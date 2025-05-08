#include<stdio.h>
void main(){

	char ch = 'A';

	for(int i=1;i<=3;i++){
		for(int j=3;j>=i;j--){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}


/*  A B C
    D E
    F

    */
