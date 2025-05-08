#include<stdio.h>
void main(){
	int add=0,x=0;

	for(int i=0; i<=5; i++){
		printf(" Enter subject %d marks",i);
		scanf("%d",&x);
		add=add+x;
	}
	printf("total marks=%d",add);
}
