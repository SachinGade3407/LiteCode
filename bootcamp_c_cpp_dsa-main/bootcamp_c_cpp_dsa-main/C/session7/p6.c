#include<stdio.h>
void main(){

        int rows=4;


        for(int i=1;i<=rows;i++){
                int num=1;

                for(int space=rows;space>i;space--){
                        printf("  ");
                }
                for(int j=1;j<=2*i-1;j++){
                        if(j<i){
                                printf(" ");

                        }else{
                                printf(" ");

                        }

                }
               printf("\n");
	}
}

