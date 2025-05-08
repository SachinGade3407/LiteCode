#include<stdio.h>
#include<string.h>

typedef struct Company{

	int empno;
	char compName[20];
	float rev;
	struct Company *next;
}Comp;

void main(){


	Comp obj1,obj2,obj3;

	Comp*head=&obj1;

	head->empno=8;
	strcpy(head->compName,"c2w");
	head->rev=10;
	head->next=&obj2;

	head->next->empno=11;
        strcpy(head->next->compName,"Binecaps");
        head->next->rev=15.9;
        head->next->next=&obj3;

	head->next->next->empno=15;
        strcpy(head->next->next->compName,"Boompanda");
        head->next->next->rev=12.25;
        head->next->next->next=&obj2;

	printf("%d\n",head->empno);
	printf("%s\n",head->compName);
	printf("%f\n",head->rev);

       
	printf("%d\n",head->next->empno);
        printf("%s\n",head->next->compName);
        printf("%f\n",head->next->rev);

	
	printf("%d\n",head->next->next->empno);
        printf("%s\n",head->next->next->compName);
        printf("%f\n",head->next->next->rev);
}


