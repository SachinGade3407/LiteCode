/* function like macros*/


#include<stdio.h>
#define add(x,y) x+y
#define sqr(x) x*x
#undef add
void main(){

	int x=10;
	int y=20;

	printf("%d\n",add(x,y));

	printf("%d\n",sqr(x));
}
/*implicit declaration of function ‘add’ [-Wimplicit-function-declaration]
   13 |         printf("%d\n",add(x,y));
      |                       ^~~
/usr/bin/ld: /tmp/cclNDHDP.o: in function `main':
p19.c:(.text+0x2a): undefined reference to `add'
collect2: error: ld returned 1 exit status
*/
