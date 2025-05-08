#include<iostream>
#include<set>
int main(){
	std::set<int>sObj={10,20,30,40,50};
	std::set<int>::iterator itr;
	for(itr = sObj.begin();itr!=sObj.end();itr++){
		std::cout<< *itr <<std::endl;

		std::set<int,std::greater<int>>sObj2={10,20,30,40,50};
		std::set<int>::iterator itr1;
	for(itr = sObj2.begin();itr!=sObj2.end();itr++){
		std::cout<< *itr <<std::endl;
	}
	return 0;
	}
}



