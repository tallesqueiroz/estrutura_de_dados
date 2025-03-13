#include <stdio.h>

int main() {
    float salario, imposto;

    printf("Digite o seu salario: R$ ");
    scanf("%f", &salario);

    if (salario <= 2000.00) {
        imposto = 0.0;
    } else if (salario <= 4000.00) {
        imposto = salario * 0.10;
    } else {
        imposto = salario * 0.20;
    }

    printf("Voce deve pagar R$%.2f de imposto!", imposto);

    return 0;
}
