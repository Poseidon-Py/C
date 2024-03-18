#include <locale.h>
#include <stdio.h>

/*
Faça um programa em linguagem C que peça uma temperatura em graus Celsius
e apresente seu respectivo valor em Fahrenheits. O cálculo de conversão é:
F= (9*C/5) + 32.
*/

int main()
{
    setlocale(LC_ALL, "portuguese");
    float temp_celsius;
    

    printf("Informe uma temperatura em graus Celsius: \n");
    scanf("%f", &temp_celsius);
    
    float temp_farenheit = (9 * temp_celsius/5) + 32;
    printf("A temperatura informada (%.1f �C) em graus Farenheit �: %.1f �F", temp_celsius, temp_farenheit);

    return 0;
}