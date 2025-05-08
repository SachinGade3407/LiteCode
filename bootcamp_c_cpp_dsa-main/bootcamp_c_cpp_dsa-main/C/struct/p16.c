/*pointer to a structure*/


#include<stdio.h>
struct moive{

	char mName[20];
	int count;
	float price;

}obj1={"Tumbbad",2,350.12};
void main(){

	struct moive *sptr=&obj1;

	printf("%s\n",obj1.mName);
	printf("%d\n",obj1.count);
	printf("%f\n",obj1.price);

	printf("%s\n",(*sptr).mName);
        printf("%d\n",sptr->count);
        printf("%f\n",sptr->price);
}
