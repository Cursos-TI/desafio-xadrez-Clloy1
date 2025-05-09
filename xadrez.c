#include <stdio.h>


// Função recursiva para movimento da Torre
void torre(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    torre(casas - 1);
}

// Função recursiva para movimento do Bispo
void bispo(int casas) {
    if (casas == 0) return;
    printf("Diagonal\n");
    bispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void rainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    rainha(casas - 1);
}

// Função para movimento do Cavalo
void cavalo() {
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
}

// Função para movimento do Bispo com loops aninhados
void bispoLoops(int casas) {
    int i;
    for (i = 0; i < casas; i++) {
        printf("Diagonal\n");
    }
}

int main() {
    printf("Movimento da Torre:\n");
    torre(5);
    printf("\n");

    printf("Movimento do Bispo:\n");
    bispo(3);
    printf("\n");

    printf("Movimento da Rainha:\n");
    rainha(4);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    cavalo();
    printf("\n");

    printf("Movimento do Bispo com loops aninhados:\n");
    bispoLoops(3);
    printf("\n");

    

    return 0;
}
