/* self referential structure*/

#include<stdio.h>
#include<string.h>

typedef struct Employee{


	int empId;
	char empName[20];
	float sal;
	struct Employee *next;
}Emp;
void main(){

	Emp obj1,obj2,obj3;

	obj1.empId=1;
	strcpy(obj1.empName,"Kanha");
	obj1.sal=50.05;
	obj1.next=&obj2;

	obj2.empId=2;
        strcpy(obj2.empName,"Rahul");
        obj2.sal=60.05;
        obj2.next=&obj3;

	obj3.empId=3;
        strcpy(obj3.empName,"Ashish");
        obj3.sal=65.05;
        obj3.next=NULL;

	struct Employee *head=&obj1;

	printf("%d\n",obj2.next->empId);
	printf("%s\n",obj2.next->empName);
	printf("%f\n",obj2.next->sal);

	printf("%d\n",obj1.next->empId);
        printf("%s\n",obj1.next->empName);
	printf("%f\n",obj1.next->sal);

	printf("%d\n",head->empId);
        printf("%s\n",head->empName);
        printf("%f\n",head->sal);
}
