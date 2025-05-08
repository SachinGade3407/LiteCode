#include<stdio.h>
void main(){

        FILE *fp=fopen("Demo.txt","r");

        char ch;
        int n=10;
        int x=1;

        while((ch=fgetc(fp))!= -1){
                if(x==n)
                        continue;
                printf("%c",ch);
                x++;
        }
}


