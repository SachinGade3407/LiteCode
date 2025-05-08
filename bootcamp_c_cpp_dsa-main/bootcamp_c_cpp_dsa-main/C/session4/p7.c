/*
  1 2 3 4 5 6 7 
  2 3 4 5 6 7
  3 4 5 6 7 
  4 5 6 7 
  5 6 7 
  6 7 
  7
  */


#include<stdio.h>
void main(){

        int rows;

        printf("Enter no of rows:\n");
        scanf("%d",&rows);
	int num=1;

        for(int i=1;i<=rows;i++){
               
                for(int j=rows;j>=i;j--){
                        printf("%d ",num);
			num++;
                       
                }
		num=i+1;
                printf("\n");
	
        }
}



