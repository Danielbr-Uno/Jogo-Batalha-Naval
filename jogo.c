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
/*
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
*/
    //Inserindo as embarcações nas diagonais A0-C2(principal) e J0-H2(secundária).
/*
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
*/
    
    //Inserindo a habilidade em cruz.
    int horizontal = 3, horizontal2 = 1;
    int vertical = 1, vertical2 = 3;
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
        {
            if (horizontal + j < 10){
                tabuleiro[horizontal2 + j][vertical2] = 1;
                }
        }
            tabuleiro[horizontal][vertical + i] = 1;
    }

    //Inserindo a habilidade em octaedro.
    int linhaCentro = 7;
    int colunaCentro = 7;
    int distancia = 2;

    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            int dist_linha = (i >= linhaCentro) ? (i - linhaCentro) : (linhaCentro - i);
            int dist_coluna = (j >= colunaCentro) ? (j - colunaCentro) : (colunaCentro - j);
            if (dist_linha + dist_coluna <= distancia){
                tabuleiro[i][j] = 2;
            }
        }
    }

    //Inserindo habilidade em cone.
    int linhaInicial = 0;
    int colunaInicial = 7;
    int alcance = 3;

    for(int i = 0; i < alcance; i++){
        int linha = linhaInicial + i;
        for(int j = -i; j <= i; j++){
            int coluna = colunaInicial + j;
            if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                tabuleiro[linha][coluna] = 5;
            }
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