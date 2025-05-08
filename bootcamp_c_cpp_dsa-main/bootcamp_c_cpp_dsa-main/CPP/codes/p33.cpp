#include<iostream>
class Demo{
	public:
		Demo(){
			std::cout<< "In Constructor" <<std::endl;
		}
};
int main(){
	Demo obj;
	return 0;
}
