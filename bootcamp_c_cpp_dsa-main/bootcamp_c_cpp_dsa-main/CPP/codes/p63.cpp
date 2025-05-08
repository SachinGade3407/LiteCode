#include<iostream>
#include<list>
int main(){
	std::<int>lst(5,10);
	//{10,20,300,40,50};
	std::list<int>iterator itr;
	list.push_back(50);
	list.push_front(20);
	for(itr=lst.begin();itr!=lst.end();itr++){
		std::cout<< *itr <<std::endl;
	}
	return 0;
}

