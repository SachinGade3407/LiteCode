//Operator Overloading....


#include<iostream>
class Demo{
	int x=10;
	int y=20;
	public:
	Demo(int x,int y){
		this->x=x;
		this->y=y;
	}
	void getData(){
		std::cout<<x<<y<<std::endl;
	}
	friend void fun(const Demo &obj){
		std::cout<<obj.x<<obj.y<<std::endl;
	}
};
int main(){
	Demo obj1(10,20);
	obj1.getData();
	return 0;
}
