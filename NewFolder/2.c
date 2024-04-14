#include <stdio.h>

int main() {

    int num;

    printf("Informe um valor: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Valor positivo");
    } else if (num < 0) {
        printf("Valor negativo");
    } else {
        printf("Valor neutro");
    }

    return 0;
}