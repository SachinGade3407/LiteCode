#include<stdio.h>
void main(){
	int x,y,sum=0;

	printf("Enter 1st num: ");
	scanf("%d",&x);

	printf("Enter 2nd num which is greater that 1st num: ");
	scanf("%d",&y);

	for(int i=x;i<=y;i++){
		if(i%5==0){

			sum=sum+i;
		}
	}
	printf("sum of numbers divisible by 5 is %d\n",sum);
}
