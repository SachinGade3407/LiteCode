#include<iostream>
#include<vector>

class Player{
	int jerNo;
	std::string pName;
	public:
	Player (int jerNo,String pName){
		this->jerNo=jerNo;
		this->pName=pName;
	}
	void info(){
		std::cout<<"JERNO"<<jerNo<<""<<"NAME"<<pName<<std::endl;
	}
};
int main(){
	Player pOne(18,"Virat");
	Player pTwo(07,"MSD");
	Player pThree(45,"Rohit");
	Player pFour(1,"KLRahul");
	std::vector<Player>pobj={pOne,pTwo,pThree,pFour};
	for(int i=0;i<pobj.size();i++){
		pobj[i].info();
	}
	return 0;

}


