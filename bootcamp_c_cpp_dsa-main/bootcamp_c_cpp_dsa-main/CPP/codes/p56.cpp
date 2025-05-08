#include<iostream>
void gun(){
	std::cout<< "Start gun" <<std::endl;
	throw-1;
	std::cout<< "End gun" <<std::endl;
}
void fun(){
	std::cout<< "Start fun" <<std::endl;
	gun();
	std::cout<< "End fun" <<std::endl;
}
int main(){
	std::cout<< "Start main" <<std::endl;
	fun();
	std::cout<< "End main" <<std::endl;
	return 0;
}


