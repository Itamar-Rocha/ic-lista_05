// Exercício 5

#include <stdio.h>

#define LINHA 2
#define COLUNA 2

int main()
{
    int A[LINHA][COLUNA], B[LINHA][COLUNA], SOMA[LINHA][COLUNA];
    
    printf("Informe %d números inteiros a serem armazenados na matriz A: ", LINHA*COLUNA);
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Informe %d números inteiros a serem armazenados na matriz B: ", LINHA*COLUNA);
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            scanf("%d", &B[i][j]);
        }
    }
    
    printf("Matriz SOMA:\n");
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            SOMA[i][j] = A[i][j] + B[i][j];
            printf("%d ", SOMA[i][j]);
        }
        printf("\n");
    }

    return 0;
}

