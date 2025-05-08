#include<stdio.h>
void main(){
	int num;
	int count=0;

	printf("enter the number\n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(num%i==0){
		count++;
		}
	}
	if(count==2){
		printf("%d number is prime number\n",num);
	}else if(num==0){
		printf("%d number is not prime number nor composite\n",num);
	}else if(num==1){
		printf("%d number is not prime number\n",num);
	}else{
		printf("%d number is not prime number\n",num);
	}
}


