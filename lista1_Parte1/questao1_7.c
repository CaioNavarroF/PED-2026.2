#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;
    printf("Digite um numero: ");
    scanf("%d", &A);
    printf("Digite outro numero: ");
    scanf("%d", &B);
    C = B;
    B = A;
    A = C;
    printf("Variaveis trocadas: %d, %d\n", A, B);
    return 0;
}
