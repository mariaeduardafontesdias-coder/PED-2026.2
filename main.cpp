#include <stdio.h>

void organizar(int *a, int *b) {
    int temp;

    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y;

    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    organizar(&x, &y);

    printf("Maior = %d\n", x);
    printf("Menor = %d\n", y);

    return 0;
}
