// Tower of Honar.


#include<stdio.h>
void TOH(int N,char fromRod,char viaRod,char toRod){
	if(N>0){
		TOH(N-1,fromRod,toRod, viaRod);
		printf("%c->%c\n",fromRod,toRod);
		TOH(N-1,viaRod, fromRod, toRod);
	}
}
void main(){
	int N=4;
	TOH(N,'A','B','C');
}

