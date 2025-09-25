#include <stdio.h>

void imprimirInvertido(int vetor[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int quantidade;
    printf("Quantidade de números: ");
    scanf("%d", &quantidade);

    int valores[quantidade];
    for (int i = 0; i < quantidade; i++) {
        printf("Digite um número: ");
        scanf("%d", &valores[i]);
    }

    imprimirInvertido(valores, quantidade);
    return 0;
}
