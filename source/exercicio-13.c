// Exercício 13

#include <stdio.h>
#define TAM 5

int main()
{
    int matriz[TAM][TAM], linha;
    
    printf("Digite %d números inteiros: ", TAM*TAM);
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Informe a linha da matriz que será impressa: ");
    scanf("%d", &linha);
    
    for (int i = 0; i < TAM; i++){
        printf("%d ", matriz[linha-1][i]);
    }

    return 0;
}
