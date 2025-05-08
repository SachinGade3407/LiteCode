#include<iostream>
class Demo{
        int x=10;
        int y=20;
        public:
        Demo(){
                std::cout<< "NO-args" <<std::endl;
                std::cout<< x << y <<std::endl;
        }
        Demo(int x,int y){
                std::cout<< this->x <<std::endl;
                std::cout<< this->y <<std::endl;
                std::cout<< x << y <<std::endl;
                std::cout<< "Para" <<std::endl;
        }
        void info(Demo obj){
                std::cout<< x << y <<std::endl;
                std::cout<< obj.x << obj.y <<std::endl;

        }
};
int main(){
        Demo obj1;
	Demo obj2(100,200); 
   	obj2.info(obj1);	
        return 0;
}

