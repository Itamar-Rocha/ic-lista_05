// Exercício 9

#include <stdio.h>

#define LINHA 2
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA], C[COLUNA][LINHA];
    
    printf("Informe %d números inteiros a serem armazenados na matriz: ", LINHA*COLUNA);
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz transposta: \n");
    for (int i = 0; i < COLUNA; i++){
        for (int j = 0; j < LINHA; j++){
            C[i][j] = matriz[j][i];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

