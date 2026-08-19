#include <stdio.h>

int isCapicua(int a){
    int ultimo, qnt = 0, i, aux = a, div = 1;
    while(aux > 0){
        aux /= 10;
        qnt++;
    }
    while(a / 10 > 0){
        div = 1;
        ultimo = a % 10;
        a /= 10;
        for(i = 1; i < qnt - 1; i++){
            div *= 10;
        }
        qnt -= 2;
        aux = a/div;
        a = a % div;
        if (ultimo != aux){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(isCapicua(n) == 1){
        printf("O numero %d e capicua!\n", n);
    }else{
        printf("O numero %d nao e capicua!\n", n);
    }
    return 0;
}
