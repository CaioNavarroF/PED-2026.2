#include <stdio.h>

int main(){
    int x, cem, cin, vin, dez, cinco, dois, um;
    printf("Digite um valor: ");
    scanf("%d", &x);
    cem = x / 100;
    x %= 100;
    cin = x / 50;
    x %= 50;
    vin = x / 20;
    x %= 20;
    dez = x / 10;
    x %= 10;
    cinco = x / 5;
    x %= 5;
    dois = x / 2;
    x %= 2;
    um = x;
    printf("Cedulas de 100: %d\n", cem);
    printf("Cedulas de 50: %d\n", cin);
    printf("Cedulas de 20: %d\n", vin);
    printf("Cedulas de 10: %d\n", dez);
    printf("Cedulas de 5: %d\n", cinco);
    printf("Cedulas de 2: %d\n", dois);
    printf("Moedas de 1: %d\n", um);
    return 0;
}
