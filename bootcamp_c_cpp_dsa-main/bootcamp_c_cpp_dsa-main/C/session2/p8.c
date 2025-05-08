/*
  9 64 7
  36 5 16
  3 4 1
  */
#include<stdio.h>
void main(){

        int rows;
        printf("Enter the number of rows:\n");
        scanf("%d",&rows);

        int num=rows*rows;
        for(int i=1;i<=rows;i++){
                for(int j=1;j<=rows;j++){
                       if(num%2==0){
                       printf("%d ",num*num);
                       num--;
                       }else{
                printf("%d ",num);
                num--;
                       }
                }
	printf("\n");
	}
}

                 
