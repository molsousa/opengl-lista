#include <stdio.h>
#include <stdlib.h>
#include "../include/lista.h"

struct lista{
    int info;
    struct lista* prox;
};

Lista criar_lista()
{
    return NULL;
}

void liberar_lista(Lista l)
{
    if(l == NULL)
        return;

    liberar_lista(l->prox);
    free(l);
}

Lista insere(Lista l, int info)
{
    if(l == NULL){
        Lista aux = malloc(sizeof(struct lista));
        aux->info = info;
        aux->prox = NULL;

        return aux;
    }

    l->prox = insere(l->prox, info);

    return l;
}

Lista remover(Lista l)
{
    Lista aux = l->prox;

    free(l);

    return aux;
}
