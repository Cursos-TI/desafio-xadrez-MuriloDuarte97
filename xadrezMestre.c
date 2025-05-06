#include <stdio.h>

// ========================
// Constantes
// ========================
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8
#define PASSOS_VERTICAIS 2
#define PASSOS_HORIZONTAIS 1

// ========================
// Função Recursiva - TORRE
// Direção: Direita
// ========================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ========================
// Função Recursiva - RAINHA
// Direção: Esquerda
// ========================
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ========================
// Função Recursiva + Loops - BISPO
// Direção: Cima Direita (Diagonal)
// ========================
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop externo: representa o movimento vertical
    for (int v = 0; v < 1; v++) {
        // Loop interno: representa o movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ========================
// Função Principal
// ========================
int main() {
    // ========================
    // Movimento da TORRE (recursivo)
    // ========================
    printf("Movimento da Torre:\n");
    moverTorre(MOVIMENTO_TORRE);

    // ========================
    // Movimento do BISPO (recursivo + loops aninhados)
    // ========================
    printf("\nMovimento do Bispo:\n");
    moverBispo(MOVIMENTO_BISPO);

    // ========================
    // Movimento da RAINHA (recursivo)
    // ========================
    printf("\nMovimento da Rainha:\n");
    moverRainha(MOVIMENTO_RAINHA);

    // ========================
    // Movimento do CAVALO (loops aninhados, controle com break/continue)
    // Direção: 2 para cima, 1 para direita
    // ========================
    printf("\nMovimento do Cavalo:\n");

    // Loop externo simula tentativas de movimento (apenas 1 neste caso)
    for (int tentativa = 0; tentativa < 1; tentativa++) {
        int passosVerticais = 0;
        int passosHorizontais = 0;

        // Loop para movimentos verticais
        for (int i = 0; i < PASSOS_VERTICAIS + 1; i++) {
            if (i == PASSOS_VERTICAIS) break; // para exatamente em 2 passos
            printf("Cima\n");
            passosVerticais++;
        }

        // Loop para movimentos horizontais
        for (int j = 0; j < PASSOS_HORIZONTAIS + 1; j++) {
            if (j > PASSOS_HORIZONTAIS) continue; // ignora passos extras
            printf("Direita\n");
            passosHorizontais++;
        }
    }

    return 0;
}
