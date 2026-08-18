#include <stdio.h>

int main(){
    
    int x, y;
    char op;
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Digite a operacao: ");
    scanf(" %c", &op);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    if(op == '+'){
        printf("Resultado: %d\n", x + y);
    }
    else if(op == '-'){
        printf("Resultado: %d\n", x - y);
    }
    else if(op == '*'){
        printf("Resultado: %d\n", x * y);
    }
    else if(op == '/'){
        if(y == 0){
            printf("Divisão por zero nao permitida.\n");
            return 0;
        }
        printf("Resultado: %d\n", x / y);
    }
    else{
        printf("Operacao invalida!\n");
    }
    return 0;
}