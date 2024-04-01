#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo para calcular a quantidade de latas de tinta necess�ria para pintar
um tanque cil�ndrico de combust�vel e o custo do material para o servi�o de pintura.
A altura e o raio do tanque s�o fornecidos pelo usu�rio. O pre�o da lata de tinta
tamb�m � fornecido pelo usu�rio. Considere que cada lata cont�m 5 litros de tinta e
que cada litro de tinta pinta 3 metros quadrados da �rea do tanque. A �rea de um
tanque cil�ndrico � dada pela f�rmula:
???? = ???? + 2???? = 2?? ?? ? + 2 ?? ??^2 = 2 ?? ?? (? + ??)
*/

/*
entrada = altura; 
          raio;
          preco unitario lata;

processamento = area do cilindro; 
                quantidade de latas (area dividido por 15 que � a quantidade que cada lata pinta);
                custo (preco de uma lata vezes a quantidade de latas);

saida = quantidade de latas necessarias;
        custo;

cada lata = 5l 
cada litro = 3 metros2
15 metros quadrados por lata
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    float altura_cl, raio_cl, preco_1lata, area, qnt_latas, custo;

    //entrada
    printf("Informe a altura do tanque cil�ndrico [m]: ");
    scanf("%f", &altura_cl); 
    printf("\nInforme o raio do tanque cil�ndrico [m]: ");
    scanf("%f", &raio_cl); 
    printf("\nInforme o pre�o de uma lata de tinta [R$]: ");
    scanf("%f", &preco_1lata); 

    //processamento
    area = 2 * 3.1415 * raio_cl * (altura_cl + raio_cl);
    qnt_latas = area / 15; //calcular qnt latas sendo que cada lata pinta 15m2
    custo = preco_1lata * qnt_latas;

    //saida
    printf("Para um tanque de %.2f metros de altura e %.2f metros de raio, s�o necess�rias %.2f latas de tinta e o custo total ser� de R$ %.2f.", altura_cl, raio_cl, qnt_latas, custo);

    return 0; 
}