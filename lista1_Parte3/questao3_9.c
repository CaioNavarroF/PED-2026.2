#include <stdio.h>

int main(){
    int num, dig1, dig2, dig3, palp1, palp2, palp3, cont = 0, i;
    char sin1, sin2, sin3;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);
    dig1 = num % 10;
    dig2 = (num / 10) % 10;
    dig3 = (num / 100) % 10;
    for(i = 1; i <= 10; i++){
        cont = 0;
        printf("===CHANCE %d===\n", i);
        printf("Palpite: ");
        scanf("%d %d %d", &palp1, &palp2, &palp3);
        if (palp1 == dig1){
            sin1 = '+';
            cont++;
        }else if(palp1 == dig2 || palp1 == dig3){
            sin1 = '!';
        }else{
            sin1 = '-';
        }
        if(palp2 == dig2){
            sin2 = '+';
            cont++;
        }else if(palp2 == dig1 || palp2 == dig3){
            sin2 = '!';
        }else{
            sin2 = '-';
        }
        if (palp3 == dig3){
            sin3 = '+';
            cont++;
        }else if(palp3 == dig1 || palp3 == dig2){
            sin3 = '!';
        }else{
            sin3 = '-';
        }
        printf("Saida: %c %c %c\n", sin1, sin2, sin3);
        if(cont == 3){
            printf("Parabens! Voce acertou o numero!\n");
            return 1;
        }
    }
    printf("Voce perdeu!!");
    return 0;
}