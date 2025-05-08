#include<stdio.h>
struct library{

        char bname[20];
        int eyear;
        float price;
        

} obj2={"Ms office",2001,450};
void main(){
        struct library obj1={"DS",1899,526};

        printf("%s\n",obj1.bname);
        printf("%d\n",obj1.eyear);
        printf("%f\n",obj1.price);

        printf("%s\n",obj2.bname);
        printf("%d\n",obj2.eyear);
        printf("%f\n",obj2.price);

}

