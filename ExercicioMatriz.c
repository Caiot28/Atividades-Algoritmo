#include<stdio.h>

main(){

    char nomes[3][50];
    float notas[3][3], media, soma;

    for(int i = 0; i < 3; i++){
        printf("Digite o nome do aluno: ");
        fgets(nomes[i], 50, stdin);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("Digite uma nota: ");
        scanf("%f", &notas[i][j]);
        }
    printf("\n");
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma += notas[i][j];
        }
        media = soma / 3;
        printf("\nNome : %sMedia: %.2f", nomes[i], media);
        soma = 0;
    }


}