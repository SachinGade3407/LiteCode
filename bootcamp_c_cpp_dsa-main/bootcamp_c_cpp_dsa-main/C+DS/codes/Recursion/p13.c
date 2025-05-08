//double recursion
//error in code 


#include<stdio.h>
int fun(int N){

	if(N<=1){
		return 1;
	}
	int x=fun(N-1);
	int y=fun(N-2);
	printf("%d\n",x);
	printf("%d\n",y);
}
