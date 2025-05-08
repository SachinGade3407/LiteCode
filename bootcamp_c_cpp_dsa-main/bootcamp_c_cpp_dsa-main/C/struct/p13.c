/* object initialiazation useding malloc*/

#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr=(int *)malloc(sizeof(int));
	*ptr=50;

	printf("%p",ptr);
	printf("%d",*ptr);
	
	free(ptr);

	printf("%d",*ptr);


}
