#include<iostream>
int main(){
	int x=10;
	int y(20);

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	int z{30};
	std::cout << z << std::endl;
	return 0;
}


