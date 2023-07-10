#include <stdio.h>
#include <math.h>

void calcula_hexagono (float l, float *area, float *perimetro){
    float A, P;
    A = (3*(pow(l, 2))*sqrt(3))/2;
    P = 6*l;
    return (A, P);
}

int main (void){
    float lado, A1, P1;
    printf("Informe o valor do lado do hexagono: ");
    scanf("%f", &lado);
    A1 = calcula_hexagono(lado);
    P1 = calcula_hexagono(lado);
    printf("Resultado da área e do perímetro = %f%f\n", A1, P1);
    return 0;
}