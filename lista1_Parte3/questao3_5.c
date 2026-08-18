#include <stdio.h>

int main()
{
    int N, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            soma++;
            if(soma > 2){
                printf("O numero nao e primo");
                return 0;
            }
        }
    }
    printf("O numero e primo");
    return 0;
}