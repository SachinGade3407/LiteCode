//fabbonaccio series


#include<stdio.h>

int fabo(int num){
	int x1=0;
	int x2=1;
	int x3=0;
	for(int i=1;i<=num;i++){
		//printf("%d\n",x3);
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	return x3;

}
void main(){
	int num;
	printf("enter the number\n");
	scanf("%d",&num);

	int ret=fabo(num);
	printf("%d\n",ret);
}


