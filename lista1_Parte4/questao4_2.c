#include <stdio.h>

void maior(int a, int b, int c){
    if(a > b && a > c)
        printf("Maior: %d\n", a);
    else if(b > c)
        printf("Maior: %d\n", b);
    else
        printf("Maior: %d\n", c);
}

int main(){
    int n1, n2, n3;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    maior(n1, n2, n3);
    return 0;
}
