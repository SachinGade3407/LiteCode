#include<stdio.h>
void main(){

	int rows;
	printf("Enter num of rows:");
	scanf("%d",&rows);

	int i=1,j=2,l=3;
	int num=1;
	int f=0;

	for(int k=1;k<=rows;k++){
		for(int s=1;s<=rows;s++){
			if(i==num){
				printf("=\t");
				f=1;
			}else if(j==num){
				printf("s\t");
				f=2;
			}else if(l==num){
				printf("@\t");
				f=3;
			}
		}
		if(f==1){
			i=i+3;
		}else if(f==2){
			j=j+3;
		}else if(f==3){
			l=l+3;
		}
		num++;
			printf("\n");
	}
}

