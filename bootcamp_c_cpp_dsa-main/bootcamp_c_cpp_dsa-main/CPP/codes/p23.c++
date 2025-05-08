#include<iostream>
void fun(int &ref1,int &ref2){
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
	std::cout<< ref1<<" "<<ref2<<std::endl;
}
int main(){
	int x = 10;
	int y = 20;
	std::cout<< x <<" "<<  y <<std::endl;
	fun;
	std::cout<< x <<" "<<  y <<std::endl;
	return 0;
}

