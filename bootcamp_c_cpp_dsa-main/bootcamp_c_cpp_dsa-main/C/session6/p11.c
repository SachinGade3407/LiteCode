//1  3  5  7  9
//   9  7  5  3
//      3  5  7
//         7  5
//            5

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);
        int num=-1;

	for(int i=1;i<=row;i++){
		
		for(int sp=1;sp<i;sp++){
			printf(" \t");
		}
	       	
		for(int j=row;j>=i;j--){
			if(i%2==1){
				num=num+2;
           		        printf("%d\t",num);
	         		
			}else{
				num=num-2;
				printf("%d\t",num);
			
			}
		
		}
		printf("\n");
	}
}

