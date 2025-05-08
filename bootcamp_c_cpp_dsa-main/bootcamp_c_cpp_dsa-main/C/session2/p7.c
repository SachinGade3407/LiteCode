/*
 D D D D
 C C C C
 B B B B 
 A A A A
 */
#include<stdio.h>
void main(){

        int rows;

        printf("Enter the number of rows:\n");
        scanf("%d",&rows);

        char ch=64+rows;
        for(int i=1;i<=rows;i++){
                for(int j=1;j<=rows;j++){
                        printf("%c ",ch);
                }
                ch--;
                printf("\n");
        }
}
               
