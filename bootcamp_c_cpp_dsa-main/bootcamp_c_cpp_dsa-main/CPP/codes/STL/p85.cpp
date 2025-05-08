#include<iostream>
#include<forword_list>
int main(){
	std::forword_list<int>fw={10,20,30,40,50};
	for(int& data : fw){
		std::cout<< data << std::endl;
	}
	std::forword_list<int>::iterator itr;
	fw.insert_after(fw.before_begin()(),5);
	for(itr=fw.before()_begin;itr!=fw.end();itr++){
		std::cout<< *itr << std::endl;
	}
	return 0;
}


