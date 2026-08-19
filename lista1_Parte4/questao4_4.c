#include <stdio.h>

int isPrimo(int a){
    int cont = 0, i;
    for(i = 1; i <= a; i++){
        if(a % i == 0){
            cont++;
            if(cont > 2){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int i;
    for(i = 1; i <= 100; i++){
        if(isPrimo(i) == 0){
            printf("%d ", i);
        }
    }
    return 0;
}

