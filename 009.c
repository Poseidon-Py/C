#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo em linguagem C para calcular a quantidade de galões americanos
de combustível necessária para uma viagem em um automóvel que faz 12,0 Km/l; o
tempo gasto e a velocidade média na viagem são informados pelo usuário. Considere
que um galão americano possui aproximadamente 3,785 litros.
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    float tempo, velo_media, calculo_galao;

    //entrada
    printf("Informe o tempo da viagem [horas]: ");
    scanf("%f", &tempo); 
    printf("Informe a velocidade média [km/h]: ");
    scanf("%f", &velo_media); 

    //processamento
    calculo_galao = velo_media * tempo / 12 / 3.785;

    //saida
    printf("Para uma viagem de %.1f horas na velocidade média de %.0f km/h, são necessários %.2f galões americanos de combustível.", tempo, velo_media, calculo_galao);

    return 0; 
}