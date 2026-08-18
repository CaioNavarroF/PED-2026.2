#include <stdio.h>

int main()
{
    float kml, km, comb, resultado;
    int pessoa;
    printf("Quantos quilômetros seu carro percorre por litro de combustível: ");
    scanf("%f", &kml);
    printf("Quantos quilômetros voce pretende viajar de carro: ");
    scanf("%f", &km);
    printf("Qual o valor do combustível no posto onde voce abastece: ");
    scanf("%f", &comb);
    printf("Quantas pessoas vão viajar com voce e dividir a conta: ");
    scanf("%d", &pessoa);
    if(pessoa >= 2){
        resultado = ((km/kml) * comb)/pessoa;
        printf("Voces pagarao R$%.2f cada, dividindo entre os %d\n", resultado, pessoa);
    }
    else if(pessoa == 1){
        resultado = ((km/kml) * comb);
        printf("Voce pagara R$%.2f\n", resultado);
    }
    else{
        printf("Quantidade invalida de pessoas\n");
    }
    return 0;
}
