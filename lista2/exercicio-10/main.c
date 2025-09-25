#include <stdio.h>
#include "libvetores.h"

int main() {
    float a[4] = {1.5, 2.0, 3.5, 4.0};
    float b[4] = {2.0, 1.0, 0.5, 3.0};

    printf("Vetor A: ");
    imprimir(a, n);

    printf("Vetor B: ");
    imprimir(b, n);

    float produto = produtoEscalar(a, b, n);
    printf("Produto escalar A·B = %.2f\n", produto);

    return 0;
}
