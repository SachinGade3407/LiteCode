/* ftell*/

#include<stdio.h>
void main(){

	FILE *fp=fopen("vp.txt","w");
	printf("%ld\n",ftell(fp));

	fprintf(fp,"session1.txt");
	printf("%ld\n",ftell(fp));
	rewind(fp);
	fprintf(fp,"session2");
}

