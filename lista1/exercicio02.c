#include <stdio.h>

int dobrar(int x) {
    x = 2 * x;
    return x;
}

int main() {
    int x = 10;
    int y = dobrar(x);
    printf("Os valores de x e y são %d e %d.\n", x, y);
    return 0;
}