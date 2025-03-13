#include <stdio.h>

int soma(int *a, int *b) {
    return *a + *b;
}

int main() {
    int num1, num2;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", ptr1);
    printf("Digite o segundo numero: ");
    scanf("%d", ptr2);

    int resultado = soma(ptr1, ptr2);
    printf("A soma dos dois numeros e: %d\n", resultado);

    return 0;
}
