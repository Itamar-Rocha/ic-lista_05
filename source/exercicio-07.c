// Exercício 7

#include <stdio.h>

#define LINHA 5
#define COLUNA 3

int main()
{
    int A[LINHA][COLUNA], somaLinhas[] = {0, 0, 0, 0, 0};
    
    printf("Informe %d números inteiros a serem armazenados na matriz A: ", LINHA*COLUNA);
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            somaLinhas[i] += A[i][j];
        }
    }
    
    printf("Vetor somaLinhas[]: \n");
    for (int i = 0; i < LINHA; i++){
        printf("%d ", somaLinhas[i]);
    }
    
    return 0;
}

