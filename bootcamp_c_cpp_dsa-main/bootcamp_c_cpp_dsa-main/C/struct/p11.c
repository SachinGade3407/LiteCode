#include<stdio.h>
#include<string.h>

struct picnic{

	char location[10];
	int count;
	float distance;
};
 char *mystrcpy(char *dest,char *src){
 while(*src!='\0'){
	 *dest=*src;
	 dest++;

	src++;
 }
*dest='\0';	 
 return dest;
}
void main(){

	struct picnic obj1={"Goa",2,460.50};
	struct picnic obj2;

	mystrcpy(obj2.location,"Kashmir");
	obj2.count=2;
	obj2.distance=1200.00;

	printf("%s\n",obj1.location);
	printf("%d\n",obj1.count);
	printf("%f\n",obj1.distance);
	
	printf("%s\n",obj2.location);
        printf("%d\n",obj2.count);
        printf("%f\n",obj2.distance);



}

