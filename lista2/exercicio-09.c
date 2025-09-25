#include <stdio.h>

float produtoEscalar(float v1[], float v2[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v1[i] * v2[i];
    }
    return soma;
}

int main() {
    float vatorA[3] = {1, 2, 3};
    float vetorB[3] = {4, 5, 6};
    float produto = produtoEscalar(vatorA, vetorB, 3);
    printf("Produto escalar: %.2f\n", produto);
    return 0;
}
