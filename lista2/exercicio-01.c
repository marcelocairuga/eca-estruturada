#include <stdio.h>

void imprimir(float vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

int main() {
    float numeros[] = {1.5, 2.3, 4.7, 6.0, 9.8};
    imprimir(numeros, 5);
    return 0;
}
