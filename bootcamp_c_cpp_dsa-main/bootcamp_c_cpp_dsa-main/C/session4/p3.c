/* 
  ****
  ***
  **
  *
  */

#include<stdio.h>
void main(){

        int rows;

        printf("Enter no of rows:\n");
        scanf("%d",&rows);

        for(int i=1;i<=rows;i++){
                
                for(int j=rows;j>=i;j--){
                        printf("* ");
                        
                }
                printf("\n");
        }
}

