#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios

    // 1) Declarar uma matriz bidimensional para representar o tabuleiro
    int tabuleiro[10][10] = {0};

    // 2) Posicionar dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3] = {3,3,3};

    // 3) Definir a posição dos navios
    int linhaHorizontal = 2, colunaHorizontal = 4;
    int linhaVertical = 5, colunaVertical = 7;

    // 4) Posicionar os navios
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }

    // 4) Exibir o tabuleiro
    printf("Tabuleiro:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
