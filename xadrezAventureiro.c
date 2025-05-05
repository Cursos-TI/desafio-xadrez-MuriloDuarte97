#include <stdio.h>

// Constantes para o número de casas que cada peça deve se mover
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8

// Constantes para o movimento do Cavalo (2 para cima, 1 para a esquerda)
#define PASSOS_VERTICAIS 2
#define PASSOS_HORIZONTAIS 1

int main() {
    // ============================
    // Movimento da TORRE - FOR
    // Direção: Direita
    // A torre se move 5 casas para a direita.
    // ============================
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    // ============================
    // Movimento do BISPO - WHILE
    // Direção: Cima + Direita (diagonal superior direita)
    // O bispo se move 5 casas na diagonal superior direita.
    // ============================
    printf("\nMovimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < MOVIMENTO_BISPO) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ============================
    // Movimento da RAINHA - DO-WHILE
    // Direção: Esquerda
    // A rainha se move 8 casas para a esquerda.
    // ============================
    printf("\nMovimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < MOVIMENTO_RAINHA);

    // ============================
    // Movimento do CAVALO - Loops Aninhados
    // Direção: 2 casas para cima, depois 1 para a esquerda
    // Representando um movimento em "L"
    // ============================
    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for): controla a quantidade de movimentos em "L"
    for (int movimento = 0; movimento < 1; movimento++) {
        int passoVertical = 0;

        // Loop interno (while): 2 passos para cima
        while (passoVertical < PASSOS_VERTICAIS) {
            printf("Cima\n");
            passoVertical++;
        }

        // 1 passo para a esquerda
        int passoHorizontal = 0;
        while (passoHorizontal < PASSOS_HORIZONTAIS) {
            printf("Esquerda\n");
            passoHorizontal++;
        }
    }

    return 0;
}
