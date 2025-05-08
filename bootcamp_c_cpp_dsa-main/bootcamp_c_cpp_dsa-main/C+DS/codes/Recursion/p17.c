//faboancci series with recursion


#include<stdio.h>

int fabo(int num){
	if(num==0){
		return 0;
	}
	if(num==1){
		return 1;
	}
	return fabo(num-1)+fabo(num-2);
}
void main(){
	int num;
	printf("enter the number\n");
	scanf("%d",&num);

	int ret=fabo(num);
	printf("%d has faboancci number %d\n",num,ret);
}
