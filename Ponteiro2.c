#include<stdio.h>

main(){

    int num = 20;

    int *p;

    p = &num; // recebendo end de memoria

    *p = 30; // alterar o conteudo de num

    printf("%d", num);
    printf("\n%d", p);
    
    
}