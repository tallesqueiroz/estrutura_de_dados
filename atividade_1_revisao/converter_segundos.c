#include <stdio.h>

void converterSegundos(int segundos) {
    int horas, minutos;

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;

    printf("%d segundos equivalem a: %d horas, %d minutos e %d segundos.\n", 
           segundos + (horas * 3600 + minutos * 60), horas, minutos, segundos);
}

int main() {
    int segundos;

    printf("Digite um tempo em segundos: ");
    scanf("%d", &segundos);

    converterSegundos(segundos);

    return 0;
}
