// Exercício 01

#include <stdio.h>
#define TAM 5

int main()
{
    int matriz[TAM][TAM];
    
    printf("Digite %d números inteiros: ", TAM*TAM);
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz: \n");
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}



