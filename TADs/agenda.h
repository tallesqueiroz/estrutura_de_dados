#ifndef AGENDA_H
#define AGENDA_H

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char telefone[15];
} Contato;

typedef struct {
    Contato contatos[MAX_CONTATOS];
    int total;
} Agenda;

void inicializa_agenda(Agenda *a);
void adicionar_contato(Agenda *a, char *nome, char *telefone);
void remover_contato(Agenda *a, char *nome);
void buscar_contato(Agenda a, char *nome);

#endif