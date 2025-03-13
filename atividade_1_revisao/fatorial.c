#include <stdio.h>

int main() {
    int num, i;
    int fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Nao existe fatorial para numeros negativos.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d e: %d\n", num, fatorial);
    }

    return 0;
}
