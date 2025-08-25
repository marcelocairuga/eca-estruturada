#include <stdio.h>

float converter(float temperatura, char unidade) {
    if (unidade == 'c' || unidade == 'C')
        return (temperatura - 32) * 5 / 9;   // F → C
    else if (unidade == 'f' || unidade == 'F')
        return (temperatura * 9 / 5) + 32;   // C → F
    else {
        printf("Unidade de conversão inválida!\n");
        return 0;
    }
}

int main() {
    printf("100 F em Celsius: %.2f\n", converter(100, 'c'));
    printf("0 C em Fahrenheit: %.2f\n", converter(0, 'f'));
    return 0;
}
