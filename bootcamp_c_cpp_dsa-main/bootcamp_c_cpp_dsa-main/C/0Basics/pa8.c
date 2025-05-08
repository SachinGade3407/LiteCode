#include<stdio.h>
void main(){
	char userdata;
	printf("Enter character\n");
	scanf("%c", & userdata);
	printf("userdata =%c\n",userdata);

	if(userdata >= 'A'&& userdata <= 'Z'){
		printf("you  entered UPPERCASE char\n");

	}
	if(userdata>='a' && userdata<='z'){
		printf("you entered LOWERCASE char\n");
	}
}
