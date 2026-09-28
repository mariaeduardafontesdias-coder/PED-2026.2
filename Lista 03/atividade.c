#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int *aloca(int n, int preenche)
{
    int *v;

    if (preenche == TRUE)
    {
        v = calloc(n, sizeof(int));
    }
    else
    {
        v = malloc(n * sizeof(int));
    }

    return v;
}

void imprime(int *v, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(v + i));
    }

    printf("\n");
}

void preenche(int *v, int n, int valor, int is_aleatorio)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (is_aleatorio == TRUE)
        {
            *(v + i) = rand() % 101;
        }
        else
        {
            *(v + i) = valor;
        }
    }
}

int main()
{
    int *v1;
    int *v2;

    int n = 5;

    v1 = aloca(n, FALSE);
    v2 = aloca(n, TRUE);

    printf("Vetores inicialmente:\n");

    imprime(v1, n);
    imprime(v2, n);

    preenche(v1, n, 0, TRUE);
    preenche(v2, n, 100, FALSE);

    printf("\nVetores depois de preencher:\n");

    imprime(v1, n);
    imprime(v2, n);

    free(v1);
    free(v2);

    return 0;
}
