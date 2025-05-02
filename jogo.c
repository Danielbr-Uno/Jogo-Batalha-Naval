#include <stdio.h>

int main(){
    
    //Criação do tabuleiro.
    int tabuleiro[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        printf("\n");
    }

    //Inserindo embarcações nas posições D4-F4(horizontal) e J7-J9(vertical).
    int bl1 = 4;
    int bc1 = 3;
    for(int k = 0; k < 3; k++)
    {
        tabuleiro[bl1][bc1 + k] = 3;
    }

    int bl2 = 7;
    int bc2 = 'J' - 'A';
    for (int k = 0; k < 3; k++)
    {
        if (bl2 + k < 10){
        tabuleiro[bl2 + k][bc2] = 3;
        }
    }

    //Inserindo as embarcações nas diagonais A0-C2(principal) e J0-H2(secundária).
    int bl3 = 0;
    int bc3 = 'A' - 'A';
    for(int k = 0; k < 3; k++)
    {
        int linha = bl3 + k;
        int coluna = bc3 + k;

        if(linha < 10 && coluna < 10){
            tabuleiro[linha][coluna] = 3;
        }
    }

    int bl4 = 0;
    int bc4 = 'J' - 'A';
    for(int k = 0; k < 3; k++){
        int linha = bl4 + k;
        int coluna = bc4 - k;

        if(linha < 10 && coluna < 10){
            tabuleiro[linha][coluna] = 3;
        }
    }
    
    //Mostrando o tabuleiro.
    printf("   ## JOGO BATALHA NAVAL ##\n");
    printf("\n");
    printf("  ");
    for(int j = 0; j < 10; j++){
        printf("%c  ", 'A' + j);
    }
    
    printf("\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d", i);
        for(int j = 0; j < 10; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;

}