#include<iostream>
void fun(int* val){
	*val = 30;
	std::cout<< *val <<std::endl;
}
int main(){
	int x = 10;
	std::cout<< x <<std::endl;
	fun(&x);
	std::cout<< val <<std::endl;
	return 0;
}

