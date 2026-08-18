#include <stdio.h>

int main()
{
    int N;
    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("Os pares até %d são:\n", N);
    for(int i = 1; i <= N; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
