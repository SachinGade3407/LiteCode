#include<iostream>
#include<vector>
int main(){
	std::vector<int> vobj;
	vobj.push_back(10);
	vobj.push_back(20);
	vobj.push_back(30);
	vobj.push_back(40);
	vobj.push_back(50);
	for(int i=0;i<vobj.size();i++){
		std::cout<< vobj[i]<<std::endl;
	}
	return 0;
}

