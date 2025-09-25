#include <stdio.h>
#include "libvetores.h"

void imprimir(float vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

void imprimirInvertido(int vetor[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void real(float valor) {
    printf("R$ %.2f\n", valor);
}

void imprimirFormatado(float vetor[], int n) {
    for (int i = 0; i < n; i++) {
        real(vetor[i]);
    }
}

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

int impares(int vetor[], int n) {
    int contador = 0;
    for (int i = 1; i < n; i += 2) {
        printf("%d ", vetor[i]);
        contador++;
    }
    printf("\n");
    return contador;
}

float mediaPonderada(float notas[], int pesos[], int n) {
    float soma = 0;
    int somaPesos = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }
    return soma / somaPesos;
}

float central(float vetor[], int n) {
    if (n % 2 == 1) {
        return vetor[n / 2];
    } else {
        return (vetor[n / 2 - 1] + vetor[n / 2]) / 2.0;
    }
}

float produtoEscalar(float v1[], float v2[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v1[i] * v2[i];
    }
    return soma;
}
