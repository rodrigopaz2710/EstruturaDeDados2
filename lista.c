#include "lista.h"

void criar_lista(Lista *lista) {
    lista->tamanho = 0;
}

int lista_vazia(Lista *lista) {
    return lista->tamanho == 0;
}

int lista_cheia(Lista *lista) {
    return lista->tamanho == TAMANHO_MAXIMO;
}

int obter_tamanho(Lista *lista) {
    return lista->tamanho;
}

int obter_elemento(Lista *lista, int posicao) {
    if (posicao < 1 || posicao > lista->tamanho) {
        return -1; // Indicativo de erro
    }
    return lista->dados[posicao - 1];
}

void modificar_elemento(Lista *lista, int posicao, int valor) {
    if (posicao >= 1 && posicao <= lista->tamanho) {
        lista->dados[posicao - 1] = valor;
    }
}

int inserir_elemento(Lista *lista, int posicao, int valor) {
    if (lista_cheia(lista) || posicao < 1 || posicao > lista->tamanho + 1) {
        return 0; // Falha na inserção
    }

    for (int i = lista->tamanho; i >= posicao; i--) {
        lista->dados[i] = lista->dados[i - 1];
    }
    lista->dados[posicao - 1] = valor;
    lista->tamanho++;
    return 1; // Sucesso na inserção
}

int remover_elemento(Lista *lista, int posicao) {
    if (lista_vazia(lista) || posicao < 1 || posicao > lista->tamanho) {
        return 0; // Falha na remoção
    }

    for (int i = posicao - 1; i < lista->tamanho - 1; i++) {
        lista->dados[i] = lista->dados[i + 1];
    }
    lista->tamanho--;
    return 1; // Sucesso na remoção
}
