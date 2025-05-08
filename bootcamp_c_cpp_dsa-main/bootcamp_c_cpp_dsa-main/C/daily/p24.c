/* passing function to arry*/


#include<stdio.h>
void add(int x,int y){
	printf("%d\n",x+y);
}
void fun(int x,int y,void (*ptr)(int,int)){
	ptr(x,y);
}
void main(){
	fun(100,20,add);
}


