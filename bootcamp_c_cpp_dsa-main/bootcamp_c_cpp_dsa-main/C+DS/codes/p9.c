/* linkedlist*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{

	int empID;
	char empName[20];
	float sal;
	struct Employee *next;
}emp;
void main(){

	emp *emp1=(emp*)malloc(sizeof(emp));
	emp *emp2=(emp*)malloc(sizeof(emp));
       	emp *emp3=(emp*)malloc(sizeof(emp));

	emp1->empID=1;
	strcpy(emp1->empName,"Kanha");
	emp1->sal=50;
	emp1->next=emp2;

	emp2->empID=2;
        strcpy(emp2->empName,"Rahul");
        emp2->sal=60;
        emp2->next=emp3;

	emp3->empID=3;
        strcpy(emp3->empName,"Ashish");
        emp3->sal=70;
        emp3->next=NULL;

	printf("%d\n",emp1->empID);
	printf("%s\n",emp1->empName);
	printf("%f\n",emp1->sal);
	printf("%p\n",emp1->next);

	printf("\n");

	printf("%d\n",emp2->empID);
        printf("%s\n",emp2->empName);
        printf("%f\n",emp2->sal);
        printf("%p\n",emp2->next);

        printf("\n");

	printf("%d\n",emp3->empID);
        printf("%s\n",emp3->empName);
        printf("%f\n",emp3->sal);
        printf("%p\n",emp3->next);
}



