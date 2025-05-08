#include<stdio.h>
#pragma pack(1)

struct Demo{

	int x:4;
	int y;
};
void main(){
	struct Demo obj={16,500};
	printf("%ld\n",sizeof(struct Demo));
}

