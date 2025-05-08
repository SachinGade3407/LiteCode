        
#include<stdio.h>
void main(){





        int rows;
	int cols;
	int num=1;


        printf("Enter no of rows:\n");
        scanf("%d",&rows);

        for(int i=1;i<=rows*2-1;i++){
                if(i<=rows){
                        cols=i;
                }else{
                        cols=rows*2-i;
                }


                        for(int j=1;j<=cols;j++){
                                printf("%d ",num);
                                num++;
			}
			printf("\n");
	}
}

