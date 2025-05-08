#include<stdio.h>
void main(){

	int rows;
	char ch,ch1;
	int flag=0;
	int num;

	printf("Enter num of rows:");
	scanf("%d",&rows);

	printf("Enter any num:");
        scanf("%d",&num);
	
	printf("Enter any character:");
        scanf(" %c",&ch);

	ch1=ch+32;

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=rows;j++){
			if(i%2 !=0){
				printf("%c%d\t",ch,num);
				num++;
			}else{

				num--;
				ch1++;
				printf("%c%d\t",ch1,num);
				flag=1;
			}
			ch--;
		}
		printf("\n");
		ch=ch+rows+1;
		if(flag==1){
			ch1=ch1-1;
		}
		num++;
	}
}






