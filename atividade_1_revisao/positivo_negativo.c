#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um valor: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O numero %d e positivo!", num);
    } else if (num < 0) {
        printf("O numero %d e negativo!", num);
    } else {
        printf("Seu numero é zero!");
    }

    return 0;
}
