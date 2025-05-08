#include<stdio.h>
void main(){
	int x,y;
	int max;


	printf("Enter x\n");
	scanf("%d",&x);

	printf("Enter y\n");
	scanf("%d",&y);

	if(x>y){
		max=x;
	}else{
		max=y;
	}
	for(int i=0;i<=max;i++){
		if(max%x==0 && max%y==0){
			printf("lcm is %d",max);
			break;
		}
		max++;
		printf("\n");
	
	}
}



