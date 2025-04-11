#ifndef FRACOES_H
#define FRACOES_H

typedef struct {
    int numerador;
    int denominador;
} Fracao;

Fracao criar_fracao(int numerador, int denominador);
Fracao soma_fracao(Fracao a, Fracao b);
Fracao subtrai_fracao(Fracao a, Fracao b);
Fracao multiplica_fracao(Fracao a, Fracao b);
Fracao divide_fracao(Fracao a, Fracao b);
void imprime_fracao(Fracao f);
void simplificar(Fracao *f);

#endif