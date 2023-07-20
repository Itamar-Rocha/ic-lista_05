// Exercício 4

#include <stdio.h>

#define LINHA 4
#define COLUNA 4

int main()
{
    int matriz[LINHA][COLUNA] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}, {12, 13, 14, 15}};
    
    printf("Elementos com números ímpares na matriz:\n");
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            if ((matriz[i][j])%2 == 0){
                continue;
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}

