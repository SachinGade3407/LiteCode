#include<iostream>
#include<vector>
int main(){
        std::vector<int> v={10,20,30,40,50};
        for(auto itr=v.cbegin();itr!=v.cend();itr++){
                std::cout<< *itr <<std::endl;
        }
        return 0;
}

