#include <stdio.h>

int main() {
    int vet1[5], vet2[5], temp[5];
    int i;

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet1[i]);
    }

    printf("\nDigite 5 numeros para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet2[i]);
    }

    printf("\nVetor 1 antes da troca: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");

    printf("Vetor 2 antes da troca: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet2[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        temp[i] = vet1[i]; 
        vet1[i] = vet2[i];
        vet2[i] = temp[i]; 
    }

    printf("\nVetor 1 após a troca: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");

    printf("Vetor 2 após a troca: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet2[i]);
    }
    printf("\n");

    return 0;
}
