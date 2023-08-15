#include <stdio.h>

main () {         // variaveis
    
    int numero1;
    double numero2;
    float numero3;

    printf("Digite o numero 1\n");
    scanf("%d", &numero1);

    printf("Digite o numero 2\n");
    scanf("%lf", &numero2);

    printf("Digite o numero 3\n");
    scanf("%f", &numero3);


    printf("\nO numero digitado foi: %d", numero1);
    printf("\nO numero digitado foi: %lf", numero2);
    printf("\nO numero digitado foi: %f", numero3);



}