#include<stdio.h>
struct cricplayer{
	char grade1;
        int jerno;
        float avg;
        char grade;

};
void main(){
        struct cricplayer vk;
        printf("%ld\n",sizeof(vk));
        printf("%ld\n",sizeof(struct cricplayer));
}

