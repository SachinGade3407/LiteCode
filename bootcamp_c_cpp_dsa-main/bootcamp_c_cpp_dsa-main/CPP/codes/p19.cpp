#include<iostream>
class Player{
	int jerNo=18;
	std::string name = "Virat";

	public:
	void disp(){
		std::cout<< jerNo <<std::endl;
		std::cout<< name <<std::endl;
	}
};
int main(){
//	std::cout<< jerNo <<std::endl;
	Player obj;
	obj.disp();
	return 0;
}

