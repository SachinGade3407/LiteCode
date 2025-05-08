#include<iostream>
class Demo{
	int x=10;
	static int y;

	public:
	void fun(){
		int a=10;
		static int b=20;
		std::cout<< x <<std::endl;
		std::cout<< y <<std::endl;
		std::cout<< a <<std::endl;
		std::cout<< b <<std::endl;
	}
	static void gun(){
	int a=10;
	static int b=20;
//	std::cout<< x <<std::endl;
	std::cout<< y <<std::endl;
	std::cout<< a <<std::endl;
	std::cout<< b <<std::endl;
	}
};
int main(){
	Demo obj1;
	int Demo::y=20;
	Demo *obj2=new Demo();
	obj1.fun();
	obj1.gun();
	obj2->fun();
	obj2->gun();
	return 0;
}

