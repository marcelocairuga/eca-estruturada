#include <stdio.h>

void real(float valor) {
    printf("R$ %.2f\n", valor);
}

void imprimirFormatado(float vetor[], int n) {
    for (int i = 0; i < n; i++) {
        real(vetor[i]);
    }
}

int main() {
    float valores[5] = {10.5, 20.0, 35.74, 8.99, 50.032};

    imprimirFormatado(valores, 5);
    return 0;
}
