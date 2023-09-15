#include<stdio.h>

main (){

    int n, contador;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (contador = 0; contador <= n; contador+=2){
        printf("\n%d", contador);


    }


}