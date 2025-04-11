#include <stdio.h>
#include <string.h>
#include "agenda.h"

void inicializa_agenda(Agenda *a) {
    a->total = 0;
}

void adicionar_contato(Agenda *a, char *nome, char *telefone) {
    if (a->total < MAX_CONTATOS) {
        strcpy(a->contatos[a->total].nome, nome);
        strcpy(a->contatos[a->total].telefone, telefone);
        a->total++;
    } else {
        printf("Agenda cheia.\n");
    }
}

void remover_contato(Agenda *a, char *nome) {
    for (int i = 0; i < a->total; i++) {
        if (strcmp(a->contatos[i].nome, nome) == 0) {
            for (int j = i; j < a->total - 1; j++) {
                a->contatos[j] = a->contatos[j + 1];
            }
            a->total--;
            printf("Contato removido.\n");
            return;
        }
    }
    printf("Contato nao encontrado.\n");
}

void buscar_contato(Agenda a, char *nome) {
    for (int i = 0; i < a.total; i++) {
        if (strcmp(a.contatos[i].nome, nome) == 0) {
            printf("Nome: %s, Telefone: %s\n", a.contatos[i].nome, a.contatos[i].telefone);
            return;
        }
    }
    printf("Contato nao encontrado.\n");
}