//            A
//         b  a
//      C  E  G
//   d  c  b  a
//E  G  I  K  M

#include<stdio.h>
void main()
{
	int row;
	printf("enter the rows:\n");
	scanf("%d",&row);
	char ch='A';
        for(int i=1;i<=row;i++){
		for(int sp=row;sp>i;sp--){
			printf(" \t");
		}
		char temp=ch;
		for(int j=1;j<=i;j++){
			if(i%2==1){
				printf("%c\t",temp);
				temp=temp+2;
			}else{
				printf("%c\t",temp+32);
				temp--;
			}
		}
		ch++;
		printf("\n");
	}
}
