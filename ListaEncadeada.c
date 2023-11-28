#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Pessoa{
    int id;
    char nome[40];
    int idade;
    struct Pessoa *prox;
}Pessoa;

//criar lista vazia
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
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    fflush(stdin);

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

void mostrar(Pessoa *lista){
    if(lista == NULL){
        printf("\n");
        printf("Lista NULA");
        printf("\n");
        return;
    } else {
        Pessoa *atual = lista;
        while (atual != NULL){
            printf("\nNome: %s", atual->nome);
            printf("Idade: %d", atual->idade);
            printf("\nID: %d", atual->id);
            printf("\n");
            atual = atual->prox;
        }
    }
}

Pessoa* buscarPessoa(Pessoa *lista, int idBusca){
    if(lista == NULL){
        printf("\n");
        printf("Lista nula");
        printf("\n");
        return NULL;
    } else {
        Pessoa *atual = lista;
        while(atual != NULL){
            if(atual->id == idBusca){
            printf("\nNome: %s", atual->nome);
            printf("Idade: %d", atual->idade);
            printf("\nID: %d", atual->id);
            printf("\n");
            return atual;
            }
            atual = atual->prox;
        }
        printf("\nPessoa nao encontrada");
        return NULL;
    }
}
void alterar(Pessoa *encontrada){
    printf("\nAlteracao dos campos");
    fflush(stdin);
    printf("\nDigite o nome: ");
    fgets(encontrada->nome, sizeof(encontrada->nome), stdin);
    fflush(stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &encontrada->idade);
}

Pessoa* excluir(Pessoa *lista, int idBusca){
    Pessoa *anterior = NULL;
    Pessoa *atual = lista;

    while(atual != NULL && atual->id != idBusca){
        anterior = atual;
        atual = atual->prox;
    }
    if(atual != NULL){
        if(anterior != NULL){  //excluir oq nao e o primeiro
            anterior->prox = atual->prox;

        } else {  //excluir o primeiro da lista
            lista = atual->prox;
        }
        free(atual);
        printf("Excluido com sucesso");
        printf("\n");
    } else {
        printf("\nPessoa nao encontrada");
    }
    return lista;
}

void liberarLista(Pessoa *lista){
    Pessoa *atual = lista;
    Pessoa *proximaPessoa;

    while(atual != NULL){
        proximaPessoa = atual->prox;
        free(atual);
        atual = proximaPessoa;
    }
}

main(){

    int opcao, idBusca;
    Pessoa *lista = criarListaVazia();
    Pessoa *encontrada;

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
                mostrar(lista);
            break;

            case 3:
                printf("\nDigite o ID para busca: ");
                scanf("%d", &idBusca);
                encontrada = buscarPessoa(lista, idBusca);
            break;

            case 4:
                printf("\nDigite o ID para alteracao: ");
                scanf("%d", &idBusca);
                encontrada = buscarPessoa(lista, idBusca);
                if(encontrada != NULL){
                    alterar(encontrada);
                }
            break;

            case 5:
                printf("\nDigite o ID para excluir: ");
                scanf("%d", &idBusca);
                lista = excluir(lista, idBusca);
            break;

            case 0:
            break;
        }
    }while(opcao != 0);

    liberarLista(lista);
}