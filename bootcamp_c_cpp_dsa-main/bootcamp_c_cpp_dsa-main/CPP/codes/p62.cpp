#include<iostream>
#include<vector>
int main(){
        std::vector<int> v={10,20,30,40,50};
        for(auto itr=v.crbegin();itr!=v.crend();itr++){
                std::cout<< *itr <<std::endl;
        }
        return 0;
}

