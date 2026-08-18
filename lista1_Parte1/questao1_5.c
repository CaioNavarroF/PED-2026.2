#include <stdio.h>

int main()
{
    int seg, hora, min, segundos;
    printf("Digite quantos segundos: ");
    scanf("%d", &seg);
    hora = seg/3600;
    min = (seg % 3600) / 60;
    segundos = (seg % 3600) % 60;
    printf("%dh%d:%d\n", hora, min, segundos);
    return 0;
}
