/* array to a structure*/

#include<stdio.h>
struct player{
	char pName[10];
	int jerno;
	float rev;
};
void main(){

	struct player obj1={"Virat",18,980.50};
	struct player obj2={"Messi",10,4580.50};
	struct player obj3={"James",6,900.92};

	struct player arr[3]={obj1,obj2,obj3};
	for(int i=0;i<3;i++){

		printf("%s\n",arr[i].pName);
		printf("%d\n",arr[i].jerno);
		printf("%f\n",arr[i].rev);
	}
}





