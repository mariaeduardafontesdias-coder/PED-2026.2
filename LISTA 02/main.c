#include <stdio.h>

int somatorio(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + somatorio(n - 1);
}

int main()
{
    int n;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = somatorio(n);

    printf("Somatorio: %d\n", resultado);

    return 0;
}
