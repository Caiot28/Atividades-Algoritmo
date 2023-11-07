#include<stdio.h>
#include<string.h>

typedef struct{

    char nome[20];
    int idade;
    int matricula;
}Aluno;

main(){

    Aluno a[3];

    for(int i = 0; i < 3; i++){
        printf("\nDigite o nome: ");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);

        printf("Digite a idade: ");
        scanf("%d", &a[i].idade);

        printf("Digite a matricula: ");
        scanf("%d", &a[i].matricula);
        fflush(stdin);
    }

    for(int i = 0; i < 3; i++){
        printf("\nNome de p[%d]: %s", i, a[i].nome);
        printf("Idade de p[%d]: %d", i, a[i].idade);
        printf("\nMatricula de p[%d]: %d", i, a[i].matricula);
        printf("\n");
    }
}