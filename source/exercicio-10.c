// Exercício 10

#include <stdio.h>

#define LINHA 10
#define COLUNA 3
#define TAM_STRING 25

int main()
{
    int estoque[LINHA][COLUNA-1];
    char c, nomes[LINHA][TAM_STRING], cabecalho[COLUNA][TAM_STRING] = {{"nome da planta"}, {"estoque mínimo"}, {"estoque atual"}};
    
    for (int i = 0; i < LINHA; i++){
        
        printf("Informe o %s: ", cabecalho[0]);
        fgets(nomes[i], TAM_STRING, stdin);
        for (int j = 0; j < COLUNA-1; j++){
            printf("Informe o %s: ", cabecalho[j+1]);
            scanf("%d", &estoque[i][j]);
        }
        while((c = getchar()) != '\n' && c != EOF){continue;}
    }
    
    printf("Plantas que devem ser adquiridas:\n");
    for (int i = 0; i < LINHA; i++){
        if (estoque[i][0] > estoque[i][1]){
            printf("%s", nomes[i]);
        }
    }

    return 0;
}

