#include <stdio.h>
#include <stdlib.h>
#include "lista_processos.h"

struct processo {
    int id;
    int tempo_total;
    int tempo_restante;
    struct processo *prox;
};

struct lista {
    Processo *fim;
};

Lista* criar_lista() {
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->fim = NULL;
    return l;
}

Processo* criar_processo(int id, int tempo) {
    Processo *novo = (Processo*)malloc(sizeof(Processo));
    novo->id = id;
    novo->tempo_total = tempo;
    novo->tempo_restante = tempo;
    novo->prox = NULL;
    return novo;
}

Lista* inserir_processo(Lista *l, Processo *p) {
    if (l->fim == NULL) {
        p->prox = p;
        l->fim = p;
    } else {
        p->prox = l->fim->prox;
        l->fim->prox = p;
        l->fim = p;
    }
    return l;
}

Lista* remover_processo(Lista *l, Processo *p) {
    if (l->fim == NULL || p == NULL) return l;

    Processo *atual = l->fim->prox;
    Processo *anterior = l->fim;

    do {
        if (atual == p) {
            if (atual == anterior) {
                free(atual);
                l->fim = NULL;
            } else {
                anterior->prox = atual->prox;
                if (atual == l->fim)
                    l->fim = anterior;
                free(atual);
            }
            return l;
        }
        anterior = atual;
        atual = atual->prox;
    } while (atual != l->fim->prox);

    return l;
}

int lista_vazia(Lista *l) {
    return (l->fim == NULL);
}

void exibir_lista(Lista *l) {
    if (lista_vazia(l)) {
        printf("Nenhum processo na lista.\n");
        return;
    }

    Processo *atual = l->fim->prox;
    do {
        printf("Processo P%d | Tempo restante: %d\n", atual->id, atual->tempo_restante);
        atual = atual->prox;
    } while (atual != l->fim->prox);
}

void executar_round_robin(Lista *l, int quantum) {
    if (lista_vazia(l)) {
        printf("Lista vazia. Nenhum processo para executar.\n");
        return;
    }

    Processo *atual = l->fim->prox;

    printf("\n---- Iniciando Escalonamento Round Robin ----\n\n");

    while (!lista_vazia(l)) {
        printf("Processo P%d (restante: %d)\n", atual->id, atual->tempo_restante);

        if (atual->tempo_restante > quantum) {
            atual->tempo_restante -= quantum;
            printf(" -> P%d executado por %d unidades (restam %d)\n\n",
                   atual->id, quantum, atual->tempo_restante);
            atual = atual->prox;
        } else {
            printf(" -> P%d executado por %d unidades (restam 0) Finalizado\n\n",
                   atual->id, atual->tempo_restante);
            Processo *remover = atual;
            atual = atual->prox;
            l = remover_processo(l, remover);
        }
    }

    printf("---- Todos os processos foram finalizados ----\n");
}

