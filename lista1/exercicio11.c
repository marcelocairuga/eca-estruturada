#include <stdio.h>

void adivinhar(int segredo) {
    int palpite;
    printf("Adivinhe o número (1 a 10): ");
    scanf("%d", &palpite);

    if (palpite == segredo)
        printf("Parabéns, você acertou!\n");
    else
        printf("Que pena, você errou! O segredo era %d.\n", segredo);
}

int main() {
    adivinhar(4);
    adivinhar(7);
    adivinhar(2);
    return 0;
}