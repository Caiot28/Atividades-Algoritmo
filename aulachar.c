#include <stdio.h>

main(){

    char nome[20] = "Caio Teles";
    char endereco[50];
    char matricula[12];

    printf("\nNome: %s", nome);

    printf("\nDigite o endereco: ");
    scanf("%[^\n]", endereco);
    printf("O endereco e: %s", endereco);
    _fpurge(stdin); // limpa o buffer /// _fpurge(stdin); NO LINUX /// fflush(stdin); WINDOWS

    printf("\nDigite a matricula: ");
    fgets(matricula, 12, stdin);
    printf("\nA matricula e: %s", matricula);




}