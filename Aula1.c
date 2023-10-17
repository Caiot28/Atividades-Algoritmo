#include<stdio.h>
//prototipo das funções
void somar(int n1, int n2);

main(){

    int num1, num2;

    printf("Digite n1: ");
    scanf("%d", &num1);

    printf("Digite n2: ");
    scanf("%d", &num2);
    somar(num1, num2);

}

void somar(int n1, int n2){

    int soma = n1 + n2;
    printf("Resultado: %d", soma);
} 


