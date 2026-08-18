#include <stdio.h>

int main()
{
    int N, soma = 1;
    printf("Digite um numero: ");
    scanf("%d", &N);
    if(N > 0){
        for(int i = 1; i <= N; i++){
            soma *= i;
        }
        printf("Fatorial de %d: %d", N, soma);
        return 0;
    }else if(N == 0){
        printf("Fatorial de 0: 1");
        return 0;
    }else{
        printf("Numero invalido");
    }
    printf("O numero e primo");
    return 0;
}