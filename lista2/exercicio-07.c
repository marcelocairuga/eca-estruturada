#include <stdio.h>

float mediaPonderada(float notas[], int pesos[], int n) {
    float soma = 0;
    int somaPesos = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }
    return soma / somaPesos;
}

int main() {
    float notas[3] = {7.5, 8.0, 9.0};
    int pesos[3] = {2, 3, 5};
    float mp = mediaPonderada(notas, pesos, 3);
    printf("Média ponderada = %.2f\n", mp);
    return 0;
}
