#include<stdio.h>
#pragma pack(1)

struct Demo{

	int x:2;
	int y:2;
};
void main(){
	printf("%ld\n",sizeof(struct Demo));
}

