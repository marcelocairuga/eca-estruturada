#include <stdio.h>

void lerNumero() {
    int numero;
    printf("Informe um número inteiro: ");
    scanf("%d", &numero);
    printf("Você informou o número %d.\n", numero);
}

int main() {
    int quantidade;
    printf("Quantos números deseja informar? ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        lerNumero();
    }
    return 0;
}
