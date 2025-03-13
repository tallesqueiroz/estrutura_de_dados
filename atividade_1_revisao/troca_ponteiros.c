#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", ptr1);
    printf("Digite o segundo numero: ");
    scanf("%d", ptr2);

    printf("Antes da troca: numero 1 = %d, numero 2 = %d\n", *ptr1, *ptr2);

    troca(ptr1, ptr2);

    printf("Depois da troca: numero 1 = %d, numero 2 = %d\n", *ptr1, *ptr2);

    return 0;
}
