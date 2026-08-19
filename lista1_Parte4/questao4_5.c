#include <stdio.h>

int somaDigitos(int a){
    int i, soma = 0;
    for(i = 0; a > 0; i++){
        soma += a % 10;
        a /= 10;
    }
    return soma;
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Soma dos digitos: %d\n", somaDigitos(n));
    return 0;
}
