#include<stdio.h>

main(){

    int matriz1[3]/*liha*/[2]/*coluna*/;

    matriz1[0][0] = 10;
    matriz1[0][1] = 15;
    matriz1[1][0] = 2;
    matriz1[1][1] = 4;
    matriz1[2][0] = 3;
    matriz1[2][1] = 6;

    int matriz2[2][2] = {{1, 2}, 
                         {3, 4}};

    int matriz3[2][2] = {{1,2}, {3, 4}};

    //printf("%d", matriz3[0][1]);



    int matriz4[2][3];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
        printf("Digite um numero: ");
        scanf("%d", &matriz4[i][j]);
    }
    printf("\n");
}


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("\nValor em [%d][%d] = %d", i, j, matriz4[i][j]);
        }
    printf("\n");
    }
}