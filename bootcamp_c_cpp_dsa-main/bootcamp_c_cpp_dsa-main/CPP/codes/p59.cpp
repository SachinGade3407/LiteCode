#include<iostream>
class InvalidIndex{
	std::string excep;
	public:
	InvalidIndex(std::string excep){
		this->excep=excep;
	}
	InvalidIndex(const InvalidIndex& ref){
		std::cout<< "COPY" <<std::endl;
	}
		std::string getException(){
			return excep;
		}
};
class Demo{
	int arr[5]={1,2,3,4,5};
	public:
	int arrLength(){
		return(sizeof(arr)/sizeof(arr[0]));
	}
	int operator[](int index){
		if(index<0||index>=arrLength())
			throw InvalidIndex("Bad Index");
		return arr[index];
	}
};
int main(){
	Demo obj;
	try{
		std::cout<<obj[-3]<<std::endl;
	}catch(InvalidIndex obj){
		std::cout<< "Exception Occured" << obj.getException() <<std::endl;
	}
	return 0;
}


		
	
