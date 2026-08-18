#include <stdio.h>

int main(){
    
    int l1, l2, l3;
    printf("Digite um lado: ");
    scanf("%d", &l1);
    printf("Digite outro lado: ");
    scanf("%d", &l2);
    printf("Digite o terceiro lado: ");
    scanf("%d", &l3);
    if(l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
        if(l1 == l2 && l2 == l3){
            printf("O triangulo e equilatero\n");
        }
        else if(l1 == l2 || l2 == l3 || l1 == l3){
            printf("O triangulo e isosceles\n");
        }
        else{
            printf("O triangulo e escaleno\n");
        }
    }
    else{
        printf("Os lados nao formam um triangulo\n");
    }
    return 0;
}