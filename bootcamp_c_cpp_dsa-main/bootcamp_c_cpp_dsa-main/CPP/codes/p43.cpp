#include<iostream>
class Demo{
	public:
		Demo(){
			std::cout<<"In Constructor"<<std::endl;
		}
		Demo(int x){
			std::cout<<"In Para Constructor"<<std::endl;
		}
		Demo(Demo &ref){
			std::cout<<"In Copy Constructor"<<std::endl;
		}
};
int main(){
	Demo obj1;
	Demo obj2;
	Demo obj3;
	Demo arr[]={obj1,obj2,obj3};
	return 0;
}



