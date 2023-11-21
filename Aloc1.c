#include<stdio.h>
#include<stdlib.h>

main(){

    int *numero;
    char *letra;

    numero = (int*)malloc(sizeof(int));
    letra = (char*)malloc(sizeof(char));

    if(numero == NULL){
        printf("Memoria cheia");
        return;
    }

    printf("%d", numero);

    *numero = 10;
    *letra = 'A';

    printf("\n%d", *numero);
    printf("\n%c", *letra);


}