//factorial using recursion

#include<stdio.h>
int fact=1;
int fun(int x){
	//static int fact=1;//static behave like the gobal varible i.e for the scope 
	fact=fact*x;
	if(x!=1){
		fun(--x);
	}
	/*else{
		printf("factoral of given number  is %d\n",fact);
	}*/
	//return fact;
}
void main(){
	int fact=fun(5);
	printf("fact =%d\n",fact);

}


