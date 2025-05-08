//without recursion
/*
#include<stdio.h>

int factorial(int num){
	int fact=1;
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	return fact;
}
void main(){
	int ret=factorial(4);
	printf("%d\n",ret);
}

*/
//with recursion type 1
/*
#include<stdio.h>
int factorial(int x){
	static int fact=1;
	fact=fact*x;

	if(x!=1){
		factorial(--x);
	}
	return fact;

}
void main(){
	int ret=factorial(4);
	printf("%d\n",ret);
}
*/

//or type 2

#include<stdio.h>

int fact=1;

int factorial(int num){
	if(num==1){
		return fact;
	}
	fact=fact*num;
	return factorial(--num);
}
void main(){
	int ret=factorial(4);
	printf("%d\n",ret);
}
