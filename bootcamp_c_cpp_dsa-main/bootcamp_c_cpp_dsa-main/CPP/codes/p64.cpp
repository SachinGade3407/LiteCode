#include<iostream>
#include<array>
void fun(int arr[]){
	std::cout<< sizeof(arr) <<std::endl;
}
int main(){
	std::array<int,5> arr={10,20,30,40,50};
	std::cout<< sizeof(arr) <<std::endl;
	fun(arr);
	return 0;
}


	
