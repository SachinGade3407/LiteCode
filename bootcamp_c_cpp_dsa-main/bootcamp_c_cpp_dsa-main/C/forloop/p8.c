#include<stdio.h>
void main(){

	char ch1, ch2;
	int result;

	printf("Enter character\n");
	scanf("%c ",&ch1);

	printf("Enter character\n");
	scanf("%c ",&ch2);

	for(char i=1;i<=1;i++){
		if(ch1==ch2){
			printf("character are same %c\n",ch1);
		}else if(ch2>ch1){
			result=ch2-ch1;
			printf("diference is %d\n",result);
		}else{
			printf("invalid input\n");
		}
	}


}
