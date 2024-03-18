#include <stdio.h>
#include <locale.h>

/*
 Crie um programa em linguagem C que leia um nÃºmero inteiro positivo e exiba o 
dobro do mesmo.
*/

int main () 
{
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Informe um número inteiro positivo: ");
    scanf("%d", &num);
    
    int dobro = num * 2;
    printf("O dobro de [%d] é %d.", num, dobro);

    return 0;
}