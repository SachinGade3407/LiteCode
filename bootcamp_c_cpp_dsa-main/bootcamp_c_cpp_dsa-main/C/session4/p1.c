/* factorial
  i/p:5 
  o/p factorial 120 */

#include<stdio.h>
void  main(){

	int num;
	int store=1;

	printf("Enter num:\n");
	scanf("%d",&num);


	while(num>=1){
		store=store*num;
		num--;
	}
	printf("factorial is %d\n",store);
	printf("\n");
}





