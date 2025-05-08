#include<stdio.h>
void main(){
	
	int rows,num;
	char ch;
	printf("Enter num of rows:");
	scanf("%d",&rows);

	printf("Enter any num:");
        scanf("%d",&num);

	printf("Enter any character:");
        scanf(" %c",&ch);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(i%2 !=0){
				printf("%d\t",num);
			}else{
				printf("%c\t",ch);
			}
			num--;
			ch--;
		}
		printf("\n");
	}
}







