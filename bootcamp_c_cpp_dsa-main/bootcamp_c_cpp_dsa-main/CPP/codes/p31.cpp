#include<iostream>
class Demo{
	int x=10;
	static int y;
	public:
	void disp(){
		std::cout<< x <<std::endl;
		std::cout<< y <<std::endl;
	}
	static void fun(){
//		std::cout<< x <<std::endl;
		std::cout<< y <<std::endl;
	}
};
int Demo::y=20;
int main(){
	Demo obj;
	obj.disp();
	return 0;
}

