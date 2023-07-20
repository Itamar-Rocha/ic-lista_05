// Exercício 8

#include <stdio.h>

#define LINHA 3
#define COLUNA 5

int main()
{
    int A[LINHA][COLUNA], somaColunas[] = {0, 0, 0, 0, 0};
    
    printf("Informe %d números inteiros a serem armazenados na matriz A: ", LINHA*COLUNA);
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            somaColunas[j] += A[i][j];
        }
    }
    
    printf("Vetor somaColunas[]: \n");
    for (int i = 0; i < COLUNA; i++){
        printf("%d ", somaColunas[i]);
    }
    
    return 0;
}

