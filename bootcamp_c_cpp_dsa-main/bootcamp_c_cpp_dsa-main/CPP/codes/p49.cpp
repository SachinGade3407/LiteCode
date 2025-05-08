#include<iostream>
class Demo{
	int x=10;
	int y=20;
	public:
	Demo(int x,int y){
		this->x=x;
		this->y=y;
	}
	friend int operator*(const Demo& obj1,const Demo& obj2){
		return obj1*obj2;
	}
};
int main(){
	Demo obj1(10,20);
	Demo obj2(40,50);
	std::cout<< obj1*obj2<<std::endl;
	return 0;
}



