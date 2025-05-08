#include<stdio.h>
#include<string.h>

typedef struct Batsman{

	int jerno;
	char batName[20];
	float avg;
	struct Batsman *next;
}Bat;

void main(){


	Bat obj1,obj2,obj3;

	Bat*head=&obj1;

	head->jerno=18;
	strcpy(head->batName,"VK");
	head->avg=23.9;
	head->next=&obj2;

	head->next->jerno=11;
        strcpy(head->next->batName,"MS");
        head->next->avg=15.9;
        head->next->next=&obj3;

	head->next->next->jerno=15;
        strcpy(head->next->next->batName,"BK");
        head->next->next->avg=12.25;
        head->next->next->next=&obj2;

	printf("%d\n",head->jerno);
	printf("%s\n",head->batName);
	printf("%f\n",head->avg);

       
	printf("%d\n",head->next->jerno);
        printf("%s\n",head->next->batName);
        printf("%f\n",head->next->avg);

	
	printf("%d\n",head->next->next->jerno);
        printf("%s\n",head->next->next->batName);
        printf("%f\n",head->next->next->avg);
}


