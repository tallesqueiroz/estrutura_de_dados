#include <stdio.h>

int main() {
    int i;

    printf("Numeros pares de 0 a 1000:\n");

    for (i = 0; i <= 1000; i++) {
        if (i % 2 == 0) {
            printf("%d \n", i);
        }
    }

    printf("\n");

    return 0;
}
