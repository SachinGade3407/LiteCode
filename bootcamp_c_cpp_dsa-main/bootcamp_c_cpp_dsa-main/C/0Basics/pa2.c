#include<stdio.h>
void main(){
	int x;
	int ans;
	int ans1;
	int ans2;
	int ans3;
	
	printf("Enter number\n");
	scanf("%d",&x);

	ans = ++x + x++ + ++x;
	printf("%d\n",ans);
	printf("%d\n",x);

	ans1 = ++x + ++x + ++x + ++x;
	printf("%d\n",ans1);
	printf("%d\n",x);

	ans2 = x++ + x++ + ++x + x++ + ++x;
	printf("%d\n",ans2);
	printf("%d\n",x);

	ans3 = x++ + x++ + x++ + x++;
	printf("%d\n",ans3);
	printf("%d\n",x);
	
}
