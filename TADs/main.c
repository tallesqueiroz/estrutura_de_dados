#include <stdio.h>
#include <string.h>

#include "fracoes.h"
#include "matriz.h"
#include "agenda.h"
#include "retangulo.h"

int main() {
    printf("=== Teste TAD Fracao ===\n");
    Fracao f1 = criar_fracao(1, 2);
    Fracao f2 = criar_fracao(3, 4);

    Fracao soma = soma_fracao(f1, f2);
    Fracao sub = subtrai_fracao(f1, f2);
    Fracao mult = multiplica_fracao(f1, f2);
    Fracao div = divide_fracao(f1, f2);

    printf("f1 = ");
    imprime_fracao(f1);
    printf("f2 = ");
    imprime_fracao(f2);
    printf("Soma: ");
    imprime_fracao(soma);
    printf("Subtracao: ");
    imprime_fracao(sub);
    printf("Multiplicacao: ");
    imprime_fracao(mult);
    printf("Divisao: ");
    imprime_fracao(div);

    printf("\n=== Teste TAD Matriz ===\n");
    Matriz m1 = criar_matriz(2, 2);
    Matriz m2 = criar_matriz(2, 2);

    printf("Preencha matriz 1 (2x2):\n");
    preencher_matriz(&m1);
    printf("Preencha matriz 2 (2x2):\n");
    preencher_matriz(&m2);

    Matriz somaM = soma_matriz(m1, m2);
    Matriz transposta = transposta_matriz(m1);
    Matriz multM = multiplica_matriz(m1, m2);

    printf("Soma das matrizes:\n");
    imprime_matriz(somaM);
    printf("Multiplicacao das matrizes:\n");
    imprime_matriz(multM);
    printf("Transposta da primeira matriz:\n");
    imprime_matriz(transposta);

    printf("\n=== Teste TAD Agenda ===\n");
    Agenda agenda;
    inicializa_agenda(&agenda);

    adicionar_contato(&agenda, "Joao", "1234-5678");
    adicionar_contato(&agenda, "Maria", "9876-5432");
    buscar_contato(agenda, "Joao");
    remover_contato(&agenda, "Maria");
    buscar_contato(agenda, "Maria");

    printf("\n=== Teste TAD Retangulo ===\n");
    Retangulo r = criar_retangulo(5.0, 3.0);
    printf("Area: %.2f\n", area(r));
    printf("Perimetro: %.2f\n", perimetro(r));

    return 0;
}