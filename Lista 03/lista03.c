int *aloca(int n, int preenche)
{
    int *v;

    if (preenche == true)
    {
        v = calloc(n, sizeof(int));
    }
    else
    {
        v = malloc(n * sizeof(int));
    }

    return v;
}
