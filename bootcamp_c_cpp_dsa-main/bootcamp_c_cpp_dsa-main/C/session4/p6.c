/*
   a b c d 
   a b c 
   a b 
   a
   */

#include<stdio.h>
void main(){

        int rows;

        printf("Enter no of rows:\n");
        scanf("%d",&rows);

        for(int i=1;i<=rows;i++){
                char ch='a';
                for(int j=rows;j>=i;j--){
                        printf("%c ",ch);
                        ch++;
                }
                printf("\n");
        }
}

