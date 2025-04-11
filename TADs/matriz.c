#include <stdio.h>
#include "matriz.h"

Matriz criar_matriz(int linhas, int colunas) {
    Matriz m;
    m.linhas = linhas;
    m.colunas = colunas;
    return m;
}

void preencher_matriz(Matriz *m) {
    for (int i = 0; i < m->linhas; i++)
        for (int j = 0; j < m->colunas; j++)
            scanf("%d", &m->dados[i][j]);
}

Matriz soma_matriz(Matriz a, Matriz b) {
    Matriz r = criar_matriz(a.linhas, a.colunas);
    for (int i = 0; i < a.linhas; i++)
        for (int j = 0; j < a.colunas; j++)
            r.dados[i][j] = a.dados[i][j] + b.dados[i][j];
    return r;
}

Matriz multiplica_matriz(Matriz a, Matriz b) {
    Matriz r = criar_matriz(a.linhas, b.colunas);
    for (int i = 0; i < a.linhas; i++)
        for (int j = 0; j < b.colunas; j++) {
            r.dados[i][j] = 0;
            for (int k = 0; k < a.colunas; k++)
                r.dados[i][j] += a.dados[i][k] * b.dados[k][j];
        }
    return r;
}

Matriz transposta_matriz(Matriz m) {
    Matriz t = criar_matriz(m.colunas, m.linhas);
    for (int i = 0; i < m.linhas; i++)
        for (int j = 0; j < m.colunas; j++)
            t.dados[j][i] = m.dados[i][j];
    return t;
}

void imprime_matriz(Matriz m) {
    for (int i = 0; i < m.linhas; i++) {
        for (int j = 0; j < m.colunas; j++)
            printf("%d ", m.dados[i][j]);
        printf("\n");
    }
}