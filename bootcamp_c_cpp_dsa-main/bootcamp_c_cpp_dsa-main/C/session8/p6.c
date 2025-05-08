#include<stdio.h>
void main(){




        int rows;

        printf("Enter no of rows:\n");
        scanf("%d",&rows);


        for(int i=1;i<=rows;i++){
                int num=1;
                for(int space=1;space<i;space++){
                        printf("  ");
                }
                for(int j=1;j<=(rows*2-2*i+1);j++){
                        if(j<=rows-i){
                                printf("%d ",num);
                                num++;
                        }else{
                                printf("%d ",num);
				num--;
			}
		}
		printf("\n");
	}
}


