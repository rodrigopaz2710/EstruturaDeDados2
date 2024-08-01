#ifndef LISTA_H
#define LISTA_H

#define TAMANHO_MAXIMO 100

typedef struct {
    int dados[TAMANHO_MAXIMO];
    int tamanho;
} Lista;

void criar_lista(Lista *lista);
int lista_vazia(Lista *lista);
int lista_cheia(Lista *lista);
int obter_tamanho(Lista *lista);
int obter_elemento(Lista *lista, int posicao);
void modificar_elemento(Lista *lista, int posicao, int valor);
int inserir_elemento(Lista *lista, int posicao, int valor);
int remover_elemento(Lista *lista, int posicao);

#endif // LISTA_H
