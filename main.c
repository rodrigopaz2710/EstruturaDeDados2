#include <stdio.h>
#include "lista.h"

int main() {
    Lista lista;
    criar_lista(&lista);

    inserir_elemento(&lista, 1, 10);
    inserir_elemento(&lista, 2, 20);
    inserir_elemento(&lista, 3, 30);

    printf("Elemento na posição 2: %d\n", obter_elemento(&lista, 2));

    modificar_elemento(&lista, 2, 25);
    printf("Elemento na posição 2 após modificação: %d\n", obter_elemento(&lista, 2));

    remover_elemento(&lista, 2);
    printf("Tamanho após remover elemento: %d\n", obter_tamanho(&lista));

    return 0;
}
