// Desafio

#include <stdio.h>

#define TAM 5

void printm(int matriz[][TAM]);

int main()
{
    int temp, matriz[TAM][TAM];
    
    printf("Informe %d números inteiros a serem armazenados na matriz: ", TAM*TAM);
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printm(matriz);
    
    for (int i = 0; i < TAM; i++){
        temp = matriz[1][i];
        matriz[1][i] = matriz[4][i];
        matriz[4][i] = temp;
    }
    
    printm(matriz);
    
    for (int i = 0; i < TAM; i++){
        temp = matriz[i][2];
        matriz[i][2] = matriz[i][4];
        matriz[i][4] = temp;
    }
    
    printm(matriz);
    
    for (int i = 0; i < TAM; i++){
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][TAM-i-1];
        matriz[i][TAM-i-1] = temp;
    }
    
    printm(matriz);
    
    return 0;
}

void printm(int matriz[][TAM]){
    printf("Matriz: \n");
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
