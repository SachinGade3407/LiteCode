#include<stdio.h>
#include<string.h>

struct cricplayer{

	int jerNo;
	char pName[20];
	float sal;

}obj1={18,"Virat",9.8};
void main(){

	struct cricplayer obj2;
	obj2.jerNo=45;
	strcpy(obj2.pName,"Rohit");
	obj2.sal=50;

	printf("%d\n",obj1.jerNo);
	printf("%s\n",obj1.pName);
	printf("%f\n",obj1.sal);

	printf("%d\n",obj2.jerNo);
        printf("%s\n",obj2.pName);
        printf("%f\n",obj2.sal);
}



