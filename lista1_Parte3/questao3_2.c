#include <stdio.h>

int main()
{
    int N, soma = 0, x;
    printf("Digite um numero: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &x);
        soma += x;
    }
    printf("Soma: %d", soma);
    return 0;
}