#include <stdio.h>

int maior(int a, int b, int c){
    if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}

int main(){
    int n1, n2, n3;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Maior: %d\n", maior(n1, n2, n3));
    return 0;
}
