#include<stdio.h>
void main(){

        int rows=4;
	char ch='d';


        for(int i=1;i<=rows;i++){
                

                for(int space=rows;space>i;space--){
                        printf("  ");
                }
                for(int j=1;j<=2*i-1;j++){
                        if(j<i){
                                printf("%c ",ch);
				ch++;


                        }else{
                                printf("%c ",ch);
				ch--;
				
				

                        }
		
	

                }
                printf("\n");
	}
}


