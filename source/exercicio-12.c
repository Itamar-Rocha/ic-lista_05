// Exercício 10

#include <stdio.h>

#define LINHA 3
#define COLUNA 2
#define TAM_STRING 25

int main()
{
    float alturas[LINHA][COLUNA+1];
    char c, nomes[LINHA][COLUNA][TAM_STRING];
    
    for (int i = 0; i < LINHA; i++){
        int maiorAltura = -1;
        for (int j = 0; j < COLUNA; j++){
            printf("Informe o nome do %dº atleta da %d° delegação: ", j+1, i+1);
            scanf("%[^\n]", nomes[i][j]);
            
            printf("Informe a altura desse atleta: ");
            scanf("%f", &alturas[i][j]);
            if (alturas[i][j] > maiorAltura){
                maiorAltura = alturas[i][j];
                // Guarda o index do atleta com maior altura
                alturas[i][COLUNA] = j;
            }
            while((c = getchar()) != '\n' && c != EOF){continue;}
        }
    }
    
    
    for (int i = 0; i < LINHA; i++){
        printf("O maior atleta da %dº delegação é %s, com %.2f de altura.\n", i+1, nomes[i][(int)alturas[i][COLUNA]], alturas[i][(int)alturas[i][COLUNA]]);
    }

    return 0;
}

