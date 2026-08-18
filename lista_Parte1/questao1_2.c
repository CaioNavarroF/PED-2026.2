#include <stdio.h>

int main()
{
    float C, F;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);
    F = C * 9/5 + 32;
    printf("Temperatura em graus Fahrenheit: %.1f\n", F);
    return 0;
}
