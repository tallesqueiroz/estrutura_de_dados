#ifndef LISTA_PROCESSOS_H
#define LISTA_PROCESSOS_H

typedef struct processo Processo;
typedef struct lista Lista;

Lista* criar_lista();
Processo* criar_processo(int id, int tempo);
Lista* inserir_processo(Lista *l, Processo *p);
Lista* remover_processo(Lista *l, Processo *p);
int lista_vazia(Lista *l);
void exibir_lista(Lista *l);
void executar_round_robin(Lista *l, int quantum);

#endif

