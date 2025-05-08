#include<iostream>
class Demo{
	int x=10;
	int y=20;
	public:
	Demo(){
		std::cout<< "In No-args Constructor" <<std::endl;
	}
	Demo(int x,int y){
		this->x=x;
		this->y=y;
		std::cout<< "In Para Constructor" <<std::endl;
	}
	Demo(Demo &xyz){
		std::cout<< "In Copy Constructor" <<std::endl;
	}
};
int main(){
	Demo obj1;
	Demo obj2(100,200);
	Demo obj3=obj1;
	Demo obj4;
	obj4=obj1;
	return 0;
}


