#include<stdio.h>
#pragma pack(2)
struct Demo{
        char ch1;
        int x;
        float y;
        double arr[8];


};
void main(){
        struct Demo obj;
        printf("%ld\n",sizeof(obj));
        printf("%ld\n",sizeof(struct Demo));
}


