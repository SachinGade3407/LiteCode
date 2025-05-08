//a  B  c  D
//   E  f  G
//      h  I
//         J

#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);
	int ch=65;

	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
			printf(" \t");
		}

		for(int j=row;j>=i;j--){
			if(i%2==1){

			if(j%2==0){
				printf("%c\t",ch+32);
				ch++;
			}else{
				printf("%c\t",ch);
				ch++;
			}
			}
			else{
				if(j%2==0){
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
