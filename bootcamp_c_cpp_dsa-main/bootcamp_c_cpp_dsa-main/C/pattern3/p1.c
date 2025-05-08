#include<stdio.h>
void main(){

	int rows;
	int count = 0;
	

	printf("Enter rows:");
	scanf("%d",&rows);


	for(int i=1;i<=rows;i++){
		int i=1;
		for(int j=1;j<=rows;j++){

			printf("%d ",i);
			if(count==0){
				i++;
			}
			else if(count==1){
                               i= i+2;
                        }else
			if(count==2){
                               i= i+3;
                        }
                        else if(count==3){
                               i= i+4;
                        }
		
		}
		printf("\n");
		count++;


	}

}

