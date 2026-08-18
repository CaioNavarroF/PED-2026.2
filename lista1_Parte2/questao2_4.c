#include <stdio.h>

int main(){
    
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade >= 0 && idade <= 11){
        printf("Crianca\n");
    }
    else if(idade >= 12 && idade <= 17){
        printf("Adolescente\n");
    }
    else if(idade >= 18 && idade <= 59){
        printf("Adulto\n");
    }
    else if(idade >= 60){
        printf("Idoso\n");
    }
    else{
        printf("Idade invalida\n");
    }
    return 0;
}