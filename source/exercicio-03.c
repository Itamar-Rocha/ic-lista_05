// Exercício 3

#include <stdio.h>

#define LINHA 5
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {9, 10, 11}, {12, 13, 14}};
    
    printf("Elementos da matriz que se encontram em posições cuja linha mais coluna formam um número par:\n");
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            if ((j + i)%2 == 0){
                printf("%d na posição [%d][%d]\n", matriz[i][j], i, j);
            }
        }
    }

    return 0;
}

