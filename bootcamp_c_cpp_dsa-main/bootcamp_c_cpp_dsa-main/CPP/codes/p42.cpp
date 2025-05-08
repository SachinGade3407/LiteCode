#include<iostream>
class Demo{
        int x=10;
        int y=20;
        public:
        Demo(){
                std::cout<< "NO-args" <<std::endl;
        }
        Demo(int x,int y){
                std::cout<< this->x <<std::endl;
                std::cout<< this->y <<std::endl;
                std::cout<< "Para" <<std::endl;
        }
	Demo(Demo &ref){
                std::cout<< "copy" <<std::endl;
	}
	void access(){
                std::cout<< x << y <<std::endl;
	}
        Demo& info(Demo &obj){
		obj.x=700;
		obj.y=800;
		return obj;
        }
};
int main(){
        Demo obj1;
	obj1.access();
	Demo obj2(100,200);
	obj2.access();
	Demo obj3=obj2.info(obj1);
	//obj3.access();
        return 0;
}

