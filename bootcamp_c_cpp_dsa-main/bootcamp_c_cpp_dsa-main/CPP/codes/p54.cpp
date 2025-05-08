#include<iostream>
int main(){
        int x=10;
        int y=0;
        try{
                std::cout<< x/y <<std::endl;
        }catch(...){
                std::cout<< "Exception Handling" <<std::endl;
        }
                std::cout<< "End main" <<std::endl;
                return 0;

}

