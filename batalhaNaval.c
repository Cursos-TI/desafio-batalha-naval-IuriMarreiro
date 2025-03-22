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



//Declando na matriz uma figura geometrica "cone"
//Loop For aninhado com condicionais para gerar o cone na matriz

    for (i = 8; i >= 6; i--)
    {   for (j = 1; j <= 5; j++)
        {
            if (i == 7)
            {
                for (j = 2; j <= 4; j++) {
                    tabuleiro[i][j] = 7;
                } 
            } 
            else {
                if (i == 6) break;
                tabuleiro[i][j] = 7;
            }
        }
        if (i == 6) {
            j = 3;
            tabuleiro[i][j] = 7;
        }
    }
    
    
//Declando na matriz uma figura geometrica "losango"
//Um loop For simples para declarar uma parte do losango e um For aninhado para completar a figura

    for (i = 2, j = 6; i <= 6; i++)
    {
        tabuleiro [i][j] = 3;
        tabuleiro [j - 2][i + 2] = 3;
    }
    for (i = 3; i <= 5; i++)
    {   for (j = 5; j <= 7; j++)
        {
            tabuleiro [i][j] = 3;
        }
    }
    
//Declando na matriz uma figura geometrica "cruz"
//Loop For para gerar a cruz com inverção das variaveis

        for (i = 0, j = 2; i <= 4; i++)
        {
            tabuleiro [i][j] = 1;
            tabuleiro [j][i] = 1;
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