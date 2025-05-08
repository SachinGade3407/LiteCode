/* 
 
   1 2 3 4
   5 6 7
   8 9
   10
   */

#include<stdio.h>
void main(){

        int rows;
	int num=1;

        printf("Enter no of rows:\n");
        scanf("%d",&rows);

        for(int i=1;i<=rows;i++){
                
                for(int j=rows;j>=i;j--){
                        printf("%d ",num);
                        num++;
                }
                printf("\n");
        }
}

