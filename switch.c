#include<stdio.h>

main (){
    
    // estrutura switch case

    int opcao;

    printf("Digite a opcao da semana: ");
    scanf("%d", &opcao);

    switch(opcao){
        
        case 1:
            printf("Domingo");
            break;

        case 2:
            printf("Segunda");
            break;

        case 3:
            printf("Terca");
            break;

        case 4:
            printf("Quarta");
            break;

        case 5:
            printf("Quinta");
            break;

        case 6:
            printf("Sexta");
            break;

        case 7:
            printf("Sabado");
            break;
        default:
            printf("Nenhuma das opcoes acima");
            
    }

    



}