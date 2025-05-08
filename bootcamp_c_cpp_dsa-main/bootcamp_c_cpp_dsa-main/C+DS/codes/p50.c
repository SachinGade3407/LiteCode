///Prefix array...


#include<stdio.h>

void main(){

	int size;

	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array elements\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);

	}
	printf("array is :\n");

	for(int i=0;i<size;i++){
	    	printf("%d\t",arr[i]);
	}
	printf("\n");
	
	int prefix[size];
	
	prefix[0]=arr[0];

	for(int i=1;i<size;i++){

		prefix[i]=prefix[i-1]+arr[i];
	}
	printf("prefix array is :\n");

	for(int i=0;i<size;i++){
		printf("%d\t",prefix[i]);
	}

	printf("\n");

	int quere;
	printf("Enter number of queres :\n");
	scanf("%d",&quere);

	for(int i=0;i<size;i++){
		int start;
		int end;

		printf("Enter start :\n");
		scanf("%d",&start);

		printf("Enter end :\n");
                scanf("%d",&end);

		int sum=prefix[end]-prefix[start-1];

		printf("Sum is : %d\n",sum);
	}
}

