#include <stdio.h>
int main()
{
    int expe, quant;
    float pR, pS, pC, R = 0, S = 0, C = 0, soma = 0;
    char letra;
    printf("Digite a quantidade de experimentos registrados: ");
    scanf("%d", &expe);
    for(int i = 0; i < expe; i++){
        scanf("%d %c", &quant, &letra);
        if(letra == 'R'){
            R += quant;
        }
        if(letra == 'S'){
            S += quant;
        }
        if(letra == 'C'){
            C += quant;
        }
        soma += quant;
    }
    pR = (R / soma) * 100.0;
    pS = (S / soma) * 100.0;
    pC = (C / soma) * 100.0;
    printf("Total de cobaias: %.0f\n", soma);
    printf("Total de ratos: %.0f\n", R);
    printf("Total de sapos: %.0f\n", S);
    printf("Total de coelhos: %.0f\n", C);
    printf("Percentual de ratos: %.2f\n", pR);
    printf("Percentual de sapos: %.2f\n", pS);
    printf("Percentual de coelhos: %.2f\n", pC);
    return 0;
}