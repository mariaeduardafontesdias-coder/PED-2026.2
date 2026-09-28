void imprime(int *v, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(v + i));
    }

    printf("\n");
}
