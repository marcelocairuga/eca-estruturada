#include <stdio.h>

float converter(float temp, char tipo) {
    if (tipo == 'c' || tipo == 'C')
        return (temp - 32) * 5 / 9;   // F → C
    else if (tipo == 'f' || tipo == 'F')
        return (temp * 9 / 5) + 32;   // C → F
    else {
        printf("Tipo de conversão inválido!\n");
        return 0;
    }
}

int main() {
    printf("100 F em Celsius: %.2f\n", converter(100, 'c'));
    printf("0 C em Fahrenheit: %.2f\n", converter(0, 'f'));
    return 0;
}