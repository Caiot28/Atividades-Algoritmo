#include<stdio.h>
#include<string.h>

//declaracao do registro(struct)
struct pessoa {
    //campos
    char nome[20];
    int idade;
    float salario;

};

typedef struct{
    char rua[20];
    int numero;
}Endereco;



main(){
    //criar variavel do tipo registro
    struct pessoa p1;
    Endereco end1;
    Endereco end2;

    p1.idade = 20;
    strcpy(p1.nome, "Maria");
    p1.salario = 10000.00;

    end1.numero = 23;

    printf("\nDigite o nome da rua: ");
    //scanf("%[^\n]", end1.rua);
    fgets(end1.rua, sizeof(end1.rua), stdin);

    printf("\nDigite o numero: ");
    scanf("%d", &end1.numero);

    printf("\nNome: %s", p1.nome);
    printf("\nIdade: %d", p1.idade);
    printf("\nSalario: %f", p1.salario);
    printf("\nRua: %s", end1.rua);
    printf("\nNumero: %d", end1.numero);


}