#include<stdio.h>
#pragma pack(1)
struct Demo{
        char ch1;
        int x;
        float y;
        double arr[10];


};
void main(){
        struct Demo obj;
        printf("%ld\n",sizeof(obj));
        printf("%ld\n",sizeof(struct Demo));
}

