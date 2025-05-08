#include<iostream>
class Company{
	int countEmp=5000;
	std::string name="IBM";
	//const string char[]="IBM";
	public:
	Company(){
		std::cout<< "In Company Constructor"<<std::endl;
		std::cout<< "hiii"<<std::endl;
	}
	void CompInfo(){
		std::cout<< countEmp <<std::endl;
		std::cout<< name <<std::endl;
	}
};
class Employee{
	int empId=10;
	float empSal=95.00f;
	public:
	Employee(){
		std::cout<< "In Employee Constructor" <<std::endl;
	}
	void empInfo(){
		Company obj;
		std::cout<< empId <<std::endl;
		std::cout<< empSal <<std::endl;
	//	std::cout<< obj.countEmp <<std::endl;
	//	std::cout<< obj.name <<std::endl;
       		obj.CompInfo();
	}
	int main(){
		Employee *emp = new Employee();
		emp->empInfo();
		return 0;
	}
};




