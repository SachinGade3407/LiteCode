// count zero..


#include<stdio.h>
int countless(int num){
	int count=0;
	if(num==0){
		return num;
	}
	while(num){
		if(num%10==0){
			count++;
			num=num/10;
		}
		return count;
	}
}
void main(){
	int num;
	printf("Enter num to search\n");
	scanf("%d",&num);
	printf("%d\n",num);
}
