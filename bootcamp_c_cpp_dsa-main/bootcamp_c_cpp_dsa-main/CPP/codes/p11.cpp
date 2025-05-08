#include<iostream>
int main(){
	int x=10;
	int y=20;

	std::cout<< x << std::endl;
	std::cout<< y << std::endl;

       	int const  ptr=&x;
	std::cout<< x << std::endl;
	
	ptr=&y;
	*ptr=50;
	std::cout<< *ptr << std::endl;
}
