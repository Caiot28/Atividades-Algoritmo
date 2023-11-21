#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[10];
    int idade;
}Pessoa;

Pessoa* cadastrar(){
    Pessoa *p = (Pessoa*)malloc(sizeof(Pessoa));
    printf("Digite o nome: ");
    fgets(p->nome, sizeof(p->nome), stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &p->idade);

    return p;
}


main(){

    Pessoa *p;

    p = cadastrar();

    printf("\nNome: %s", p->nome);
    printf("\nIdade: %d", p->idade);


}