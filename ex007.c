#include <stdio.h>
#include <locale.h>

/*
 Faça um programa em linguagem C que leia as dimensões em metros de um 
terreno retangular e depois exiba na tela a área do terreno.
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
    printf("A área do terreno de acordo com as medidas informadas é de %.2f m².", area);

    return 0;   
}