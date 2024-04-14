#include <stdio.h>

int main() {

    float h, m, imc;

    printf("Informe uma altura: ");
    scanf("%f", &h);
    printf("Informe uma massa: ");
    scanf("%f", &m);

    imc = m / (h * h);

    if (imc < 17) {
        printf("Muito abaixo do peso");
    } else if (imc < 18.5) {
        printf("Abaixo do peso");
    } else if (imc < 25) {
        printf("Peso normal");
    } else if (imc < 30) {
        printf("Acima do peso");
    } else if (imc < 35) {
        printf("Obesidade 1");
    } else if (imc < 40) {
        printf("Obesidade 2");
    } else {
        printf("Obesidade 3");
    }


    return 0;
}