//object initiliazation...method 1...

#include<stdio.h>
	struct movie{
		char mName[20];
		int noofticket;
		float price;
	}obj1={"kantara",2,300.30};

void fun(){

	struct movie obj2={"Tiger3",2,400};
	printf("%s\n",obj3.mName);
	printf("%d\n",obj3.noofticket);
	printf("%f\n",obj3.price);
}
void main(){
	struct Movie obj3={"Dishyrm",2,300};
	fun;

	printf("%s",obj1.mName);
	printf("%d",obj1.ticket);
	printf("%f",obj1.price);

	printf("%s",obj2.mName);
        printf("%d",obj2.ticket);
        printf("%f",obj2.price);
}




		

