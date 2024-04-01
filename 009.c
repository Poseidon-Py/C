#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo em linguagem C para calcular a quantidade de gal�es americanos
de combust�vel necess�ria para uma viagem em um autom�vel que faz 12,0 Km/l; o
tempo gasto e a velocidade m�dia na viagem s�o informados pelo usu�rio. Considere
que um gal�o americano possui aproximadamente 3,785 litros.
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    float tempo, velo_media, calculo_galao;

    //entrada
    printf("Informe o tempo da viagem [horas]: ");
    scanf("%f", &tempo); 
    printf("Informe a velocidade m�dia [km/h]: ");
    scanf("%f", &velo_media); 

    //processamento
    calculo_galao = velo_media * tempo / 12 / 3.785;

    //saida
    printf("Para uma viagem de %.1f horas na velocidade m�dia de %.0f km/h, s�o necess�rios %.2f gal�es americanos de combust�vel.", tempo, velo_media, calculo_galao);

    return 0; 
}