#include <stdio.h>

int main() {

    float bruto, desc;

    printf("Informe o salario bruto: ");
    scanf("%f", &bruto);

    if (bruto <= 1900) {
        desc = 0;
    } else if (bruto <= 3000) {
        desc = 7.5 * bruto / 100;
    } else if (bruto <= 4000) {
        desc = 15 * bruto / 100;
    } else if (bruto <= 4700) {
        desc = 22.5 * bruto / 100;
    } else if (bruto > 4700) {
        desc = 27.5 * bruto / 100;
    }

    printf("O salário liquido eh de %.2f e o desconto eh de %.1f.", (bruto - desc), desc);

    return 0;
}