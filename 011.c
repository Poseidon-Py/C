#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo para calcular a quantidade de latas de tinta necessária para pintar
um tanque cilíndrico de combustível e o custo do material para o serviço de pintura.
A altura e o raio do tanque são fornecidos pelo usuário. O preço da lata de tinta
também é fornecido pelo usuário. Considere que cada lata contém 5 litros de tinta e
que cada litro de tinta pinta 3 metros quadrados da área do tanque. A área de um
tanque cilíndrico é dada pela fórmula:
???? = ???? + 2???? = 2?? ?? ? + 2 ?? ??^2 = 2 ?? ?? (? + ??)
*/

/*
entrada = altura; 
          raio;
          preco unitario lata;

processamento = area do cilindro; 
                quantidade de latas (area dividido por 15 que é a quantidade que cada lata pinta);
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
    printf("Informe a altura do tanque cilíndrico [m]: ");
    scanf("%f", &altura_cl); 
    printf("\nInforme o raio do tanque cilíndrico [m]: ");
    scanf("%f", &raio_cl); 
    printf("\nInforme o preço de uma lata de tinta [R$]: ");
    scanf("%f", &preco_1lata); 

    //processamento
    area = 2 * 3.1415 * raio_cl * (altura_cl + raio_cl);
    qnt_latas = area / 15; //calcular qnt latas sendo que cada lata pinta 15m2
    custo = preco_1lata * qnt_latas;

    //saida
    printf("Para um tanque de %.2f metros de altura e %.2f metros de raio, são necessárias %.2f latas de tinta e o custo total será de R$ %.2f.", altura_cl, raio_cl, qnt_latas, custo);

    return 0; 
}