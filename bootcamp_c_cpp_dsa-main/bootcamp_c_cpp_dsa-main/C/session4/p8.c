/* 
   d d d d
   c c c 
   b b
   a
   */


#include<stdio.h>
void main(){

        int rows;

        printf("Enter no of rows:\n");
        scanf("%d",&rows);
        

        for(int i=1;i<=rows;i++){
		char ch=96+rows;


                for(int j=rows;j>=i;j--){
			if(i%2!=0){
                        printf("%c ",96+ch);
			}else{
				printf("%c ",64+ch);
			}
			ch--;
		}
		printf("\n");
	
	}

}

