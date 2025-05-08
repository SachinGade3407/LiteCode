#include<stdio.h>
int sum=0;
void sumNum(int num){
	for(int i=num;i>0;i--){
		sum=sum+i;
		}
	printf("%d",sum);
}

void fun(int num){
	printf("%d",num);
	if(num!=1){
		fun(--num);
		
	}
}
void main(){
	fun(10);

}

