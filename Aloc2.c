#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[10];
    int idade;
}Pessoa;

main(){

    Pessoa *p;

    p = (Pessoa*)malloc(sizeof(Pessoa));

    printf("Digite o nome: ");
    fgets(p->nome, sizeof(p->nome), stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &p->idade);

    printf("\nNome: %s", p->nome);
    printf("\nIdade: %d", p->idade);

    
}