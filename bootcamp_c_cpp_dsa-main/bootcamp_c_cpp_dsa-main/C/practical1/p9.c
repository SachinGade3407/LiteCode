/* wap to print that count of divisiors of the entered num*/

#include<stdio.h>
void main(){
	int num,count=0;
	printf("Enter any number\n");
	scanf("%d",&num);

	printf("The divisor of %d are :\n",num);

	for(int i=1;i<=num;i++){
		if(num%i == 0){
			printf("%d\n",i);
			count++;
		}
	}
	printf("total count is:	%d\n",count);
}
