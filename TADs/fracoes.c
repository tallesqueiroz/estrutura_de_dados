#include <stdio.h>
#include "fracoes.h"

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

void simplificar(Fracao *f) {
    int divisor = mdc(f->numerador, f->denominador);
    f->numerador /= divisor;
    f->denominador /= divisor;
}

Fracao criar_fracao(int numerador, int denominador) {
    Fracao f = {numerador, denominador};
    simplificar(&f);
    return f;
}

Fracao soma_fracao(Fracao a, Fracao b) {
    Fracao r = {a.numerador * b.denominador + b.numerador * a.denominador,
                a.denominador * b.denominador};
    simplificar(&r);
    return r;
}

Fracao subtrai_fracao(Fracao a, Fracao b) {
    Fracao r = {a.numerador * b.denominador - b.numerador * a.denominador,
                a.denominador * b.denominador};
    simplificar(&r);
    return r;
}

Fracao multiplica_fracao(Fracao a, Fracao b) {
    Fracao r = {a.numerador * b.numerador, a.denominador * b.denominador};
    simplificar(&r);
    return r;
}

Fracao divide_fracao(Fracao a, Fracao b) {
    Fracao r = {a.numerador * b.denominador, a.denominador * b.numerador};
    simplificar(&r);
    return r;
}

void imprime_fracao(Fracao f) {
    printf("%d/%d\n", f.numerador, f.denominador);
}