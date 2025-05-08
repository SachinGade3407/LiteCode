//1
//4       9
//64      125     216
//2401    4096    6561    10000

#include<stdio.h>
void main(){
	int row;
	printf("enter row:\n");
	scanf("%d",&row);
	int inc=1;
	int num=1;

	for(int i=1;i<=row;i++){

		for(int j=1;j<=i;j++){
			printf("%d\t",num^inc);
			num++;
		}
	}
	printf("\n");
	inc++;
}


