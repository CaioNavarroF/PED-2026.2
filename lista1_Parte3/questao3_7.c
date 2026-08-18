#include <stdio.h>

int main()
{
    int N, i = 0, media = 0, soma = 0;
    while(1){
        printf("Digite um numero: ");
        scanf("%d", &N);
        if(N == -1){
            break;
        }
        soma += N;
        i++;
    }
    media = soma/i;
    printf("Media: %d", media);
    return 0;
}