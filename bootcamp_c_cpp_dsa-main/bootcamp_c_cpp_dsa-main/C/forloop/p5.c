#include<stdio.h>
void main(){
	int x;


	printf("Enter x\n");
	scanf("%d",&x);

	printf("The factors of %d are:\n",x);

	for(int i=1;i<=x;i++){
		if(x%i==0){
		
			printf("%d\n",i);
		}
	}
}

