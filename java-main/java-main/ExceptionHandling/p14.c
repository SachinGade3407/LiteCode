#include<stdio.h>
void fun(int x){
	fun(++x);
}
int main(){
	fun(1);
}

