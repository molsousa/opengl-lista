#ifndef LISTA_ENCADEADA_H_INCLUDED
#define LISTA_ENCADEADA_H_INCLUDED

#include <stdio.h>

typedef enum{true = 1, false = 0}bool;

typedef struct lista* Lista;

Lista criar_lista();

void liberar_lista(Lista);

Lista insere(Lista, int);

Lista remover(Lista);

#endif // LISTA_ENCADEADA_H_INCLUDED

