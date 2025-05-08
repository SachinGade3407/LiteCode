#include<iostream>
struct player{
	int jerNo=18;
	char name[20]={"Virat Kohli"};
	void disp(){
		std::cout<< jerNo << std::endl;
		std::cout<< name << std::endl;
	}
};
int main(){
	player obj;
	std::cout<< obj.jerNo <<std::endl;
	std::cout<< obj.name <<std::endl;
	obj.disp();
	return 0;
}


