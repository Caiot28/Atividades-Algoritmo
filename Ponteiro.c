#include<stdio.h>

main(){

    int numero = 10;

    int *x;
    x = &numero;

    printf("\nEndereco de memoria de numero: %d", &numero);
    printf("\nEndereco de memoria do ponteiro x: %d", &x);
    printf("\n");

    printf("\nConteudo da variavel: %d", numero);
    printf("\nConteudo do ponteiro: %d", x);



}