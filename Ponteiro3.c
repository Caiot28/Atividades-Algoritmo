#include<stdio.h>

void mudarNum(int *p){
    *p = 10;
}

main(){

int num;
mudarNum(&num);
printf("%d", num);




}