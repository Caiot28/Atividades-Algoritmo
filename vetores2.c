#include<stdio.h>

main(){

    int valores[5];
    int soma = 0, somaEspecifica;

    for(int i = 0; i < 5; i++){
        printf("\nDigite um valor: ");
        scanf("%d", &valores[i]);
        soma += valores[i];
        
    }

    for (int i = 0; i < 5; i++) {
        printf("\n%d", valores[i]);
        
    }

    printf("\nSoma %d", soma);

    somaEspecifica = valores[0] + valores[1];
    printf("\nSoma especifica %d", somaEspecifica);
    
}