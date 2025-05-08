#include<iostream>
class Demo{
	public:
		int x=10;
	public:

		Demo(){
			std::cout<< "NO-args" <<std::endl;
		}
		Demo(int x){
			std::cout<< "Para" <<std::endl;
		}
		Demo(Demo &obj){
			std::cout<< "Copy" <<std::endl;

		}
		void fun(){
			std::cout<< x <<std::endl;
			std::cout<< this->x <<std::endl;
		}
};
int main(){
	Demo obj1;
	Demo obj3=obj1;
	std::cout<< obj1.x <<std::endl;
	std::cout<< obj3.x <<std::endl;
	obj3.x=50;
	std::cout<< obj1.x <<std::endl;	
	std::cout<< obj3.x <<std::endl;
}




