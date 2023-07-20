// Exercício 6

#include <stdio.h>

#define LINHA 4
#define COLUNA 5

int main()
{
    int matriz[LINHA][COLUNA];
    int soma = 0;
    
    printf("Informe %d números inteiros a serem armazenados na matriz: ", LINHA*COLUNA);
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf("\nA soma de todos os elementos dessa matriz é: %d\n", soma);
    
    return 0;
}

