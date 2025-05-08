#include<iostream>

void fun(int x,int y){
	std::cout<< "int-int"<< x << y <<std::endl;

}
void fun(int x,float y){
	std::cout<< "int-float"<< x << y <<std::endl;
}
int main(){
	fun(10.5,20.5);
}

