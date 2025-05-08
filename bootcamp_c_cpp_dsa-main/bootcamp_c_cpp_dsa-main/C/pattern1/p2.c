#include<stdio.h>
void main(){
	int rows;


	printf("Enter the rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

		char ch = 'a';
		int x=1;
		for(int j=1;j<=3;j++){
			if(i==1 || i==3){

			printf(" %d ",x);
			x++;
			
			}else{

				printf(" %c",ch);
				ch++;
			}
		
		}
		printf("\n");
	}
}
