#include <stdio.h>

int main () {

//Criando o jogo batalha naval

    printf("*** JOGO DE BATALHA NAVAL ***\n\n");

//Declarando as variaveis

    int i, j;
    char *coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int *tabuleiro[10][10] = {0};

//As colunas do tabuleiro será por caracteris
//Loop For para definir e imprimir as colunas

    printf("¨");
    for (i = 0; i < 10; i++)
    {
        printf("  %c", coluna[i]);
    }
    printf("\n");

//Declarando na matriz o navio na horizontal
//Loop For para registrar o navio

    for (i = 3; i <= 5; i++)
    {
        tabuleiro[2][i] = 7;
    }

//Declarando na matriz o navio na vertical
//Loop For para registrar o navio

    for (j = 6; j <= 8; j++)
    {
        tabuleiro[j][7] = 7;
    }

//Declando na matriz o navio na diagonal primaria
//Loop For com duas variveis inicializadas com condicionais para registrar o navio

    for (i = 3, j = 1; i <= 5 && j <= 3; i++, j++)
    {
        tabuleiro[i][j] = 7;
    }
    
//Declando na matriz o navio na diagonal secundaria
//Loop For com duas variveis inicializadas com condicionais para registrar o navio

    for (i = 1, j = 8; i <= 3 && j >= 6; i++, j--)
    {
        tabuleiro[i][j] = 7;
    }
    
//Código para imprimir o tabuleiro no console
//Matriz do tabuleiro é impresso no console por meio do loop For aninhado

    for (j = 0; j < 10; j++)
    {
        printf("%d", j + 1);

        for (i = 0; i < 10; i++)
        {
            printf("  %d", tabuleiro[j][i]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}