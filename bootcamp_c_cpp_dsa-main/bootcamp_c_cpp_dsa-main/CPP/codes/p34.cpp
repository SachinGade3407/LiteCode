//No args..

#include<iostream>
class Demo{
	public:
		Demo(){
			std::cout<< "In Constructor" <<std::endl;
			std::cout<< this <<std::endl;
		}
};
int main(){
	Demo obj;
	std::cout<< &obj <<std::endl;
}
