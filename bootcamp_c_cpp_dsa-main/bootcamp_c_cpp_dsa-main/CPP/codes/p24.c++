#include<iostream>
void fun(int x,int y){
	std::cout<<"In Normal"<<std::endl;
}
void fun(int ref1,int ref2){
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
	std::cout<< ref1 <<" "<<ref2 <<std::endl;
}

