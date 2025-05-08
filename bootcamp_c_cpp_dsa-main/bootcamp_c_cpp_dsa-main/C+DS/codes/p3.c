#include<stdio.h>

struct movie{

	char mName[10];
	int count;
	float rating;
}obj1={"Drishyam",8,8.8};

void main(){

	typedef struct movie mv;
	mv obj2={"Kanatara",5,9.8};
	mv *ptr1=&obj1;
	mv *ptr2=&obj2;

	printf("%s\n",(*ptr1).mName);
	printf("%d\n",(*ptr1).count);
	printf("%f\n",(*ptr1).rating);
	
	
	printf("%s\n",ptr2->mName);
        printf("%d\n",ptr2->count);
        printf("%f\n",ptr2->rating);

}



