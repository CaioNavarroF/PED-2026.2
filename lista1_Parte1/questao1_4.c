#include <stdio.h>
#include <math.h>

int main()
{
    float r, A;
    printf("Escreva o raio do circulo: ");
    scanf("%f", &r);
    A = M_PI * pow(r, 2);
    printf("Area: %f\n", A);
    return 0;
}
