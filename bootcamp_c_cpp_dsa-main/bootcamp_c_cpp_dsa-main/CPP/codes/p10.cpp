#include<iostream>
int main(){
	int y=20;
	int x=10;

	std::cout<< x << std::endl;
	std::cout<< y << std::endl;

	const int *ptr=&x;

	std::cout<< *ptr << std::endl;

	ptr=&y;
	std::cout<< *ptr << std::endl;
}

