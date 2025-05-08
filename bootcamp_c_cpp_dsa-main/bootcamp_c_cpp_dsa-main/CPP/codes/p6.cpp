#include<iostream>
int  x=100;
int main(){
	int x=10;
	std::cout<< x <<std::endl;
	{
		int x=20;
		std::cout<< x <<std::endl;
		std::cout<< ::x <<std::endl;

		x=30;
		std::cout<< x <<std::endl;
	}
	std::cout<< x <<std::endl;
	std::cout<< ::x <<std::endl;
}

