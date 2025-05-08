#include<iostream>
class Demo{
	public:
		int x=10;
		Demo(){
			std::cout<<"In Constructor"<<std::endl;
			std::cout<< x <<std::endl;
		}
		Demo(int x){
			this->x=x;
			std::cout<<"In Para Constructor"<<std::endl;
			std::cout<< x <<std::endl;
			Demo();
		}
};
int main(){
	Demo obj(50);
	std::cout<<"End main" <<std::endl;
	return 0;
}

