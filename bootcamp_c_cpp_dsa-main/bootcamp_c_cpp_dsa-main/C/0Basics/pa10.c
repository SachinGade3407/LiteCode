#include<stdio.h>
void main(){
	char var;

	printf("Enter the  character\n");
	scanf("%c",&var);
                                                       
	if(var=='a'||var=='A'||var=='e'||var=='E'||var=='i'||var=='I'||var=='o'||var=='O'||var=='u'||var=='U'){
		printf("%c is vowels\n",var);
	}else{
		printf("%c is a consonant\n",var);
	}
}

