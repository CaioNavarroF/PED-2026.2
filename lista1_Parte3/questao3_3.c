#include <stdio.h>

int main()
{
    int N;
    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("Tabuada do %d\n", N);
    for(int i = 1; i <= N; i++){
        printf("%d x %d: = %d\n", i, N, i*N);
        
    }
    return 0;
}