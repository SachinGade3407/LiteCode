/* wap to check whether the given input is a pyhtagorus triplet or not*/

#include<stdio.h>
void main(){
		int x,y,z;

		printf("Ente the length of 2 adjacent sidesof triangle:\n");
		scanf("%d %d",&x,&y);

		printf("Enter the length of oppsite side:\n");
		scanf("%d",&z);

		if((z*z==(x*x)+(y*y))){
			printf("Given sides %d ,%d and %d are pythagorus triplets\n",x,y,z);
		}else{
			printf("Given sides %d ,%d and %d are not pythagorous triplet\n",x,y,z);
		}
}


