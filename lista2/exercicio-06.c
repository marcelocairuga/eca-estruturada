#include <stdio.h>

int impares(int vetor[], int n) {
    int contador = 0;
    for (int i = 1; i < n; i += 2) {
        printf("%d ", vetor[i]);
        contador++;
    }
    printf("\n");
    return contador;
}

int main() {
    int valores[6] = {10, 20, 30, 40, 50, 60};
    int quantidade = impares(valores, 6);
    printf("Quantidade de elementos em índices ímpares: %d\n", quantidade);
    return 0;
}
