#include <stdio.h>
#include <locale.h>

/*
 Fa�a um programa em linguagem C que leia as dimens�es em metros de um 
terreno retangular e depois exiba na tela a �rea do terreno.
*/

int main()
{
    setlocale(LC_ALL, "portuguese");
    float metragem_h, metragem_lado;

    printf("Informe a metragem lateral do terreno: ");
    scanf("%f", &metragem_lado);    

    printf("Agora informe a metragem da altura do terreno: ");
    scanf("%f", &metragem_h);

    float area = metragem_lado * metragem_h;
    printf("A �rea do terreno de acordo com as medidas informadas � de %.2f m�.", area);

    return 0;   
}