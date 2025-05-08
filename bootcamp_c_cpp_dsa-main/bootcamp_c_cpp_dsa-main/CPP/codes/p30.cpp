#include<iostream>
class Demo{
	int x=10;
	public:
	static int y;
	
};
int Demo::y=20;
int main(){
	Demo obj1;
	Demo obj2;
	std::cout<< &obj1 <<std::endl;
	obj2.y=50;
	std::cout<< &obj2 <<std::endl;
	return 0;
}
