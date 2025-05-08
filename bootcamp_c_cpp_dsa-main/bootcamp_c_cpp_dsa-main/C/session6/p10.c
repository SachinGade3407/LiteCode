//a   B   c   D
//    e   F   g
//        H   i
//            J

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){

		for(int sp=1;sp<i;sp++){
			printf(" \t");
		}
		int num=65;
		for(int j=row;j<=i;j--){
			if(i%2==1){
				if(j%2==1){
           				printf("%c\t",num+32);
					num++;
				}else{
					printf("%c\t",num);
					num++;
				}
			}else{
				if(j%2==1){
					printf("%c\t",num);
					num++;
				}else{
					printf("%c\t",num+32);
					num++;
				}
			}
		}
		printf("\n");
	}
}
