#ifndef PILHA_H
#define PILHA_H

#define MAX 1000

typedef struct {
    char dados[MAX];
    int topo;
} Pilha;

void pilha_inicializar(Pilha *p);
int pilha_vazia(Pilha *p);
int pilha_cheia(Pilha *p);
void push(Pilha *p, char valor);
char pop(Pilha *p);

#endif