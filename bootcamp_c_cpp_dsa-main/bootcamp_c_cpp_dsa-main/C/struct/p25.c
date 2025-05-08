// Bit field structure

#include<stdio.h>
struct Demo{

	int x:1;
	int y;
	char ch;
};
void main(){

	printf("%ld\n",sizeof(struct Demo));
}
