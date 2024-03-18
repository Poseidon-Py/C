#include <stdio.h>
#include <locale.h>

/*
Faça um programa que solicite ao usuário o valor do salário mínimo e o valor do 
salário do usuário. Calcule e imprima na tela quantos salários mínimos ele ganha. 
Considere que os valores dos salários são do tipo real, assim como a variável que 
irá armazenar a relação salário usuário e salário mínimo.
*/

int main() 
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float sal_min, sal_user;

    printf("Informe o valor do salário mínimo: \n");
    scanf("%f", &sal_min);

    printf("Informe o valor do seu salário: \n");
    scanf("%f", &sal_user);

    float qnt_sal = sal_user/sal_min;

    printf("Você recebe %.1f salários mínimos.", qnt_sal);

    return 0;
}