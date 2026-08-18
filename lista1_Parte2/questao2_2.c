#include <stdio.h>

int main(){
    
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if(x > 0){
        printf("O numero %d e positivo\n", x);
    }
    else if(x < 0){
        printf("O numero %d e negativo\n", x);
    }
    else{
        printf("O numero %d e zero\n", x);
    }
    return 0;
}