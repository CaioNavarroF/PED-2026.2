#include <stdio.h>

 int tamanhoSequenciaCollatz(long n){
    int cont = 0;
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }else{
            n = (n * 3) + 1;
        }
        cont++;
        if(n == 1){
            return cont;
        }
    }
}

int main(){
    int a, arm, i, maior = 0, num = 0;
    printf("Digite um numero: ");
    scanf("%d", &a);
    for(i = 1; i <= a; i++){
        arm = tamanhoSequenciaCollatz(i);
        if(arm > maior){
            maior = arm;
            num = i;
        }
    }
    printf("O numero %d gera a maior sequencia: %d\n", num, maior);
    return 0;
}
