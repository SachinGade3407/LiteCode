#include<iostream>
int main(){
	std::cout<< "" <<std::endl;
	try{
		throw 'A';
	}catch(int x){
		std::cout<< "Exception Handling" <<std::endl;
	}
	std::cout<< "End main" <<std::endl;
	return 0;
}

