

#include<stdio.h>
int fun(int n){

	if(n<=1){
		return 1;
	}

return n+fun(n-1)+fun(n-2);
}
void main(){
	int num;
	printf("enter the number \n");
	scanf("%d",&num);

	int ret=fun(num);
	printf("%d\n",ret);
}
