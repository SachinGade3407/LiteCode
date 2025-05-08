/*
 4 3 2 1
 3 2 1 
 2 1 
 1
 */

#include<stdio.h>
void main(){

        int rows;
	

        printf("Enter no of rows:\n");
        scanf("%d",&rows);
	int num=rows;

        for(int i=1;i<=rows;i++){
                
                for(int j=rows;j>=i;j--){
                        printf("%d ",num);
                        num--;
                }
                printf("\n");
		num=rows-i;
        }
}

