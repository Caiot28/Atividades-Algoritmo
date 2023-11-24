#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Pessoa{
    int id;
    char nome[30];
    int idade;
    struct Pessoa *prox;
}Pessoa;

//criar lisra vazia
Pessoa* criarListaVazia(){
    return NULL;
}
//criar uma nova pessoa
Pessoa* criarPessoa(){
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));
    if(novaPessoa == NULL){
        printf("\nMemoria insuficiente");
        exit(EXIT_FAILURE);
    }
    novaPessoa->prox = NULL;
    return novaPessoa; //endereco de memoria alocado para a nova pessoa
}

Pessoa* cadastrar(Pessoa *lista){
    Pessoa *novaPessoa = criarPessoa();
    //inserir as informacoes
    printf("\nDigite o nome: ");
    fgets(novaPessoa->nome, sizeof(novaPessoa), stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &novaPessoa->idade);

    srand(time(NULL)); //garante que nao vai repetir o rand
    novaPessoa->id = rand() % 100;

    if(lista == NULL){ //lista vazia
        return novaPessoa;

    } else {//lista nao vazia
        Pessoa *atual = lista;

        while (atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = novaPessoa;
        return lista;
    }
}

main(){

    int opcao;
    Pessoa *lista = criarListaVazia();

    do{
        printf("\nDigite 1 para cadastrar.");
        printf("\nDigite 2 para mostrar.");
        printf("\nDigite 3 para buscar.");
        printf("\nDigite 4 para alterar.");
        printf("\nDigite 5 para excluir.");
        printf("\nDigite 0 para sair.\n");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao){
            case 1:
                lista = cadastrar(lista);
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;

            case 0:
            break;
        }
    }while(opcao != 0);

}