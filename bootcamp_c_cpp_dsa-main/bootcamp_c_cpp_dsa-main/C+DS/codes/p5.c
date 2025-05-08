#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct project{

        char pName[10];
        int empcount;
        float price;

};
void main(){

        struct project *cptr=(struct project*)malloc(sizeof(struct project));
        strcpy(cptr->pName,"ASUS");
        cptr->empcount=50;
        cptr->price=5.50;

        printf("%s\n",(cptr)->pName);
        printf("%d\n",cptr->empcount);
        printf("%f\n",(*cptr).price);
}


