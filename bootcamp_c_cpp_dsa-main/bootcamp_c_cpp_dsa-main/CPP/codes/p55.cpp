#include<iostream>
int main(){
	int x=10;
	int y=0;
	try{
		if(y!=0)
			std::cout<< x/y <<std::endl;
		else
			throw "/by zero";
	}catch(const char *str){
			std::cout<< "Exception Handling" str <<std::endl;
	}
			std::cout<< "End main" <<std::endl;
			return 0;
}




