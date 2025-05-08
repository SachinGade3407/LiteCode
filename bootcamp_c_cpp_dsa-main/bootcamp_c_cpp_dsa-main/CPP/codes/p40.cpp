#include<iostream>
class Demo{
	int x=10;
	int y=20;
	public:
	Demo(){
		std::cout<< "NO-args" <<std::endl;
	}
	Demo(int x=50,int y=30){
		std::cout<< this->x <<std::endl;
		std::cout<< this->y <<std::endl;
		std::cout<< x << y <<std::endl;
		std::cout<< "Para" <<std::endl;
	}
	void info(Demo obj){
	}
};
int main(){
	Demo obj1(100);
//	Demo obj2;	
	return 0;
}
