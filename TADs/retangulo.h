#ifndef RETANGULO_H
#define RETANGULO_H

typedef struct {
    float base;
    float altura;
} Retangulo;

Retangulo criar_retangulo(float base, float altura);
float area(Retangulo r);
float perimetro(Retangulo r);

#endif