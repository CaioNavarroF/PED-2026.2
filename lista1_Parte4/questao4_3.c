#include <stdio.h>

long fatorial(int a){
    long result = 1, i = 1;
    if(a == 0){
        return 1;
    }else{
        for(i = 1; i <= a; i++){
            result *= i;
        }
        return result;
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Fatorial de %d: %ld\n", n, fatorial(n));
    return 0;
}

