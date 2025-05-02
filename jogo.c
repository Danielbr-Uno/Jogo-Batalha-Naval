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

    //Inserindo embarcações nas posições D4-F4 e J7-J9.
    int bl1 = 4;
    int bc1 = 3;
    for(int k = 0; k < 3; k++)
    {
        tabuleiro[bl1][bc1 + k] = 3;
    }

    int linha = 7;
    int coluna = 'J' - 'A';
    for (int q = 0; q < 3; q++)
    {
        if (linha + q < 10){
        tabuleiro[linha + q][coluna] = 3;
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