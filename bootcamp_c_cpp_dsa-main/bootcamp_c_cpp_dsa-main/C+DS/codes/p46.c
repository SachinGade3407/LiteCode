#include<stdio.h>
#include<stdlib.h>

int size=0;
int top1=0;
int top2=0;
int flag1=0;
int flag2=0;

int push1(int arr[]){
	if(top1==top2-1){
		return -1;
	}else{
		top1++;
		printf("Enter data\n");
		scanf("%d",&arr[top1]);

		return 0;
	}
}
int push2(int arr[]){
	if(top1==top2-1){
		return -1;
	}else{
		top2--;
		printf("Enter data\n");
		scanf("%d",&arr[top2]);

		return 0;
	}
}
int pop1(int arr[]){
	if(top1==-1){
		return -1;
		flag1= 0;
	}else{
		int ret=arr[top1];
		top1--;
		return ret;
		flag1= 1;
	}
}
int pop2(int arr[]){
	if(top2==size){
		return -1;
		flag1= 0;
	}else{
		int ret=arr[top2];
		top2++;
		return ret;
		flag2= 1;
	}
}
void main(){

	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	top2=-1;
	top2=size;

	char choice;
	do{
		printf("1.push1\n");
		printf("2.push2\n");
		printf("3.pop1\n");
		printf("4.pop2\n");

		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){

			case 1:
				{
					int ret=push1(arr);
					if(ret==-1){
						printf("Overflow-1\n");
					}
				}
				break;
			case 2:

                                {
                                        int ret=push2(arr);
                                        if(ret==-1){
                                                printf("Overflow-1\n");
                                        }
                                }
                                break;
			case 3:

                                {
                                        int ret=pop1(arr);
                                        if(flag1==0){
                                                printf("Stack underflow\n");
					}else{
						printf("%d popped",ret);
					}
                                }
                                break;
			case 4:
				{
                                        int ret=pop2(arr);
                                        if(flag2==0){
                                                printf("Stack underflow\n");
                                        }else{
                                                printf("%d popped",ret);
                                        }
                                }
                                break;

			default:
				printf("In valid\n");
				break;
		}
		getchar();
		printf("?");
		scanf("%d",&ch);
	}
	while(choice=='y'||choice=='Y');
}



																																																																																																																												

