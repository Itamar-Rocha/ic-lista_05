// Exercício 14

#include <stdio.h>
#define TAM 5

int main()
{
    int matriz[TAM][TAM], coluna;
    
    printf("Digite %d números inteiros: ", TAM*TAM);
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Informe a linha da matriz que será impressa: ");
    scanf("%d", &coluna);
    
    for (int i = 0; i < TAM; i++){
        printf("%d\n", matriz[i][coluna-1]);
    }

    return 0;
}
