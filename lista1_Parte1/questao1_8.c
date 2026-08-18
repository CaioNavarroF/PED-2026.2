#include <stdio.h>

int main(){
    int A, B;
    printf("Digite um numero: ");
    scanf("%d", &A);
    printf("Digite outro numero: ");
    scanf("%d", &B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("Variaveis trocadas: %d e %d\n", A, B);
    return 0;
}
