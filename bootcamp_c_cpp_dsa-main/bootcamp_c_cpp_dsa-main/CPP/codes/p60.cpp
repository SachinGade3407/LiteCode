#include<iostream>
#include<vector>
int main(){
	std::vector<int> v={10,20,30,40,50};
//	std::vector<int> = const_iterator itr;
	for(auto itr=v.begin();itr!=v.end();itr++){
		std::cout<< *itr <<std::endl;
	}
	return 0;
}
