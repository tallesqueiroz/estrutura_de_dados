#include <stdio.h>
#include "lista_processos.h"

int main() {
    Lista *lista = criar_lista();
    int n, tempo, quantum;

    printf("Informe o quantum de execução: ");
    scanf("%d", &quantum);

    printf("Quantos processos deseja adicionar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Informe o tempo total de execução do processo P%d: ", i);
        scanf("%d", &tempo);
        Processo *p = criar_processo(i, tempo);
        lista = inserir_processo(lista, p);
    }

    executar_round_robin(lista, quantum);

    return 0;
}

