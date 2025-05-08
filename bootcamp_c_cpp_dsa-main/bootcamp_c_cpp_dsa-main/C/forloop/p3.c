#include<stdio.h>
void main(){

	int x,y;

	printf("Enter start num: ");
	scanf("%d",&x);

	printf("Enter end num: ");
        scanf("%d",&y);

	for(int i=y; i>=x; i--){
		if(i%2==0){
			printf("%d ",i);

		}
	}
	printf("\n");

	for(int i=x;i<=y;i++){
		if(i%2!=0){
			printf("%d",i);
		}
	}
}


