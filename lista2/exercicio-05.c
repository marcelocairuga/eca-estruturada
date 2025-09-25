#include <stdio.h>

int pares(int vetor[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }
    printf("\n");
    return contador;
}

int main() {
    int valores[7] = {1, 2, 3, 4, 6, 9, 12};
    int quantidade = pares(valores, 7);
    printf("Quantidade de pares: %d\n", quantidade);
    return 0;
}
