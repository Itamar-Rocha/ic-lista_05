// Exercício 11

#include <stdio.h>

#define LINHA 5
#define COLUNA 3
// Acho que aqui seria um bom lugar para usar função, mas como ainda não vimos vou fazer assim mesmo
#define FORMULA_GANHOS ((10*tabela[i][0]+15*tabela[i][1]+30*tabela[i][2])/2.0)

int main()
{
    int tabela[LINHA][COLUNA], manicure = -1;
    char c, cabecalho[3][25] = {{"executados nos pés"}, {"executados nas mãos"}, {"de podologia executados"}};

    while(1){
        printf("Deseja inserir os dados de qual manicure(1-5 ou 0 para sair)? ");
        scanf("%d", &manicure);
        if (manicure == 0){
            break;
        } else if (manicure > 0 && manicure < 6){
            for (int i = 0; i < COLUNA; i++){
                printf("Informe as quantidades de serviços %s:", cabecalho[i]);
                scanf("%d", &tabela[manicure-1][i]);
            }
        }
    }
    
    printf("Valores que cada manicure receberá:\n");
    for (int i = 0; i < LINHA; i++){
        printf("Manicure %d: %.2f\n", i, FORMULA_GANHOS);
    }
    
    return 0;
}

