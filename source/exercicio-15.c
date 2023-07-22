// Exercício 15

#include <stdio.h>

#define LINHA 12
#define COLUNA 4

int main()
{
    float totalMes, totalAno,
    // Valores das vendas de cada semana
    valores[LINHA][COLUNA] = {{1847.19, 8356.19, 2003.61, 2839.89},
                              {3009.32, 3059.78, 1572.98, 5357.32},
                              {6401.73, 2044.54, 8900.39, 6769.72},
                              {2451.38, 7971.97, 7589.02, 2887.16},
                              {2726.49, 7951.93, 3981.07, 7190.31},
                              {7900.46, 1198.35, 6221.70, 7387.14},
                              {7366.41, 5052.00, 7108.12, 4346.79},
                              {7199.15, 8105.64, 1972.02, 3462.58},
                              {3480.51, 4757.89, 2136.94, 7247.90},
                              {2149.87, 2190.82, 6555.51, 8696.63},
                              {3232.79, 3878.51, 6494.01, 7438.55},
                              {5611.97, 2633.62, 4211.88, 3927.34}};
    char meses[12][15] = {{"Janeiro"},{"Fevereiro"},{"Março"},{"Abril"},{"Maio"},{"Junho"},
                          {"Julho"},{"Agosto"},{"Setembro"},{"Outubro"},{"Novembro"},{"Dezembro"}};
    
    printf("----VALORES DAS VENDAS----\n\n");
    for (int i = 0; i < LINHA; i++){
        totalMes = 0;
        for (int j = 0; j < COLUNA; j++){
            totalMes += valores[i][j];
            printf("%d° semana de %s: %.2f\n", j+1, meses[i], valores[i][j]);
        }
        printf("\nTotal do mês %s: %.2f\n\n", meses[i], totalMes);
        totalAno += totalMes;
    }
    printf("Total do ano: %.2f", totalAno);
    
    return 0;
}

