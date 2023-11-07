#include<stdio.h>
#include<string.h>
#define TAM 3

typedef struct{

    char nome[20];
    int idade;

}Pessoa;

void cadastrar(Pessoa p[], int indice){
    printf("\nDigite o nome: ");
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &p[indice].idade);
    fflush(stdin);
}

void mostrar(Pessoa p[], int totalCadastrados){
    for(int i = 0; i < totalCadastrados; i++){
        printf("\nNome: %s", p[i].nome);
        printf("Idade: %d", p[i].idade);
        printf("\n");
    }
}

main(){

    Pessoa p[TAM];
    int opcao, totalCadastros = 0;

    do{

    printf("\nDigite 1 para cadastrar");
    printf("\nDigite 2 para mostrar");
    printf("\nDigite 0 para sair\n");
    scanf("%d", &opcao);
    fflush(stdin);
    switch (opcao)
    {

    case 0:
        printf("\nFinalizado.");
        break;

    case 1:
    if(totalCadastros < TAM){
        cadastrar(p, totalCadastros);
        totalCadastros++;
    } else {
        printf("\nTotal de cadastros atingiu o limite maximo.");
    }
        break;
    case 2:
        if(totalCadastros == 0){
            printf("\nNao ha registros");
        } else {
            mostrar(p, totalCadastros);
        }
        break;

    default:
        printf("Opcao invalida");
    }

    }while(opcao != 0);

}


