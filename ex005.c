#include <stdio.h>
#include <locale.h>

/*
Crie um programa em linguagem C que solicite um valor de hora (entre 1 a 24) e 
informe quantos segundos se passaram desde o inÃ­cio do dia.
*/

int main ()
{
    setlocale(LC_ALL, "portuguese_brazil");
    int hora;

    printf("Informe um valor de hora (entre 1 e 24): \n");
    scanf("%d", &hora);

    int seg_passados = (0 + hora) * 3600;
    printf("Já se passaram %d segundos desde o início do dia.", seg_passados);

    return 0;
}