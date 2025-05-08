//         1
//      A  b
//   1  2  3
//A  b  C  d
#include<stdio.h>
void main(){
	int row;
	printf("enter the row\n");
	scanf("%d",&row);
        for(int i=1;i<=row;i++){
		for(int space=row; space>i; space--){
			printf(" \t");
		}
		int num=1;
		int ch=65;
		for(int j=1;j<=i;j++){
			if(i%2==1){
				printf("%d\t",num);
				num++;
			}	else{
				if(j%2==1){
					printf("%c\t",ch);
					ch++;
				}else{
					printf("%c\t",ch+32);
					ch++;
				}	
			}
		}
		printf("\n");
	}
}
