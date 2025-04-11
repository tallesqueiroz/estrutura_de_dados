#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct {
    int linhas, colunas;
    int dados[10][10];
} Matriz;

Matriz criar_matriz(int linhas, int colunas);
void preencher_matriz(Matriz *m);
Matriz soma_matriz(Matriz a, Matriz b);
Matriz multiplica_matriz(Matriz a, Matriz b);
Matriz transposta_matriz(Matriz m);
void imprime_matriz(Matriz m);

#endif