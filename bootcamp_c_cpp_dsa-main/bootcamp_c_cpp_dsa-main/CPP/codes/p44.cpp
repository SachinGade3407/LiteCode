#include<iostream>
class Demo{
	public:
		int x=10;
		Demo(){
			this->x=80;
			std::cout<<"In Comstructor"<<std::endl;
		}
		void getData() const{
			std::cout<< x <<std::endl;
		}
};
int main(){
	const Demo obj;
			std::cout<< obj.x <<std::endl;
			obj.getData();
			return 0;
}



