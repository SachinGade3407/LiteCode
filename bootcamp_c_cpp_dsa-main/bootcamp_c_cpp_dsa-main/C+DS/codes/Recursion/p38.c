#include<stdio.h>
int x=5;
void fun(int x){
        printf("Hello");
        if(x!=1){
                fun(--x);
		printf("Bye");
	}
}
void main(){
        fun(5);
}


