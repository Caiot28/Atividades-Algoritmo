#include<stdio.h>
#include<string.h>
#define TAM 3

typedef struct{
    char nome[20];
    int idade;
    int id;
    int status;
}Pessoa;

void cadastrar(Pessoa p[], int indice){

    p[indice].status = 1;
    p[indice].id = rand() % 100;

    printf("\nDigite o nome: ");
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &p[indice].idade);
    fflush(stdin);
}

void mostrar(Pessoa p[], int totalCadastrados){
    for(int i = 0; i < totalCadastrados; i++){
        printf("\nId: %d", p[i].id);
        printf("\nNome: %s", p[i].nome);
        printf("Idade: %d", p[i].idade);

        if(p[i].status == 1){
            printf("\nStatus: Ativo");
        } else {
            printf("\nStatus inativo");
        }

        printf("\n");
    }
}

void buscar(Pessoa p[], int totalCadastros, int id){
    if(totalCadastros == 0){
        printf("\nLista vazia");
        return;
    } else {
        for(int i = 0; i < totalCadastros; i++){
            if(p[i].id == id){
                printf("\nNome: %s", p[i].nome);
                printf("Idade: %d", p[i].idade);
                printf("\n");
                return;
            }
        }
    }
    printf("\nID nao encontrado");
    printf("\n");
}

void alterar(Pessoa p[], int totalCadastros, int id){

    int escolha;
    if(totalCadastros == 0){
        printf("\nLista vazia");
        return;
    } else {
        for(int i = 0; i < totalCadastros; i++){
            if(p[i].id == id){
                printf("\n1 - Alterar nome");
                printf("\n2 - Alterar idade");
                printf("\n3 - Alterar status");
                printf("\n4 - Alterar tudo: ");

                scanf("%d", &escolha);
                fflush(stdin);

                switch(escolha){
                    case 1:
                    printf("\nAlterar nome: ");
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);
                    break;

                    case 2:
                    printf("\nAlterar idade: ");
                    scanf("%d", &p[i].idade);
                    break;

                    case 3:
                    printf("\nAlterar status (1 - ativo / 0 - inativo): ");
                    scanf("%d", &p[i].status);
                    break;

                    case 4:
                    printf("\nAlterar nome: ");
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);

                    printf("\nAlterar idade: ");
                    scanf("%d", &p[i].idade);

                    printf("\nAlterar status (1 - ativo / 0 - inativo): ");
                    scanf("%d", &p[i].status);
                    break;
                }
                return;
            }
        }
    }
    printf("\nID nao encontrado");
    printf("\n");
}

void excluir(Pessoa p[], int totalCadastros, int id){
    if(totalCadastros == 0){
        printf("\nLista vazia");
        return;
    } else {
        for(int i = 0; i < totalCadastros; i++){
            if(p[i].id == id){
                for(int j = i; j < totalCadastros - 1; j++){
                    p[j] = p[j+1];
            
                }
                printf("\nExcluido com sucesso");
                printf("\n");
                return;
            }
        }
    }
    printf("\nID nao encontrado");
    printf("\n");
}

main(){

    Pessoa p[TAM];
    int opcao, totalCadastros = 0, idBusca;

    do{

    printf("\nDigite 1 para cadastrar");
    printf("\nDigite 2 para mostrar");
    printf("\nDigite 3 para buscar um registro");
    printf("\nDigite 4 para alterar um registro");
    printf("\nDigite 5 para excluir");
    printf("\nDigite 0 para sair: ");
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
    case 3:
        printf("\nDigite o ID para busca: ");
        scanf("%d", &idBusca);
        buscar(p, totalCadastros, idBusca);
        break;
    case 4:
        printf("\nDigite o ID para alteracao: ");
        scanf("%d", &idBusca);
        alterar(p, totalCadastros, idBusca);
        break;
    case 5:
        printf("\nDigite o ID para excluir: ");
        scanf("%d", &idBusca);
        excluir(p, totalCadastros, idBusca);
        totalCadastros--;
        break;
    default:
    printf("\nOpcao invalida");

    }

    }while(opcao != 0);

}


