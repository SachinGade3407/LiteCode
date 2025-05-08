//non-tail recursion

#include<stdio.h>

int nontail(int x){
	if(x==1){
		return 1;
	}
	return 3+nontail(--x);
}
void main(){
	int ret=nontail(4);
	printf("%d\n",ret);
}
