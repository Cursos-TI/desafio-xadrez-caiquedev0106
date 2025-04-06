#include <stdio.h>

int main() {
    // Movimentos da Torre
    printf("Movimento da Torre:\n");
    // A Torre move 5 casas para a direita (direção horizontal)
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    printf("\n");

    // Movimentos do Bispo
    printf("Movimento do Bispo:\n");
    // O Bispo move 5 casas na diagonal para cima e à direita
    int i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }
    
    printf("\n");

    // Movimentos da Rainha
    printf("Movimento da Rainha:\n");
    // A Rainha move 8 casas para a esquerda (direção horizontal)
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    
    return 0;
}