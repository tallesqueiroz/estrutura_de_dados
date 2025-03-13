#include <stdio.h>

int main() {
    int quantidade, i;
    float numero, media;
    float soma = 0;

    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / quantidade;
    printf("A media dos numeros e: %.2f\n", media);

    return 0;
}
