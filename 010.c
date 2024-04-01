#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo em linguagem C que solicite ao usu�rio a pot�ncia em Watt (W)
de um equipamento el�trico e o tempo em minutos que o dispositivo ficou ligado. O
algoritmo deve calcular qual foi o consumo total em kWh e o custo em reais,
considerando que 1 kWh � equivalente a R$ 0,50. Na sa�da de dados, exiba o consumo
total com uma casa ap�s a v�rgula e, para o custo em reais, exiba duas casas ap�s a
v�rgula. 
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    float potencia_watt, tempo_min, tempo_h, kilo, consumo_kWh, custo;

    //entrada
    printf("Informe a pot�ncia em Watt: ");
    scanf("%f", &potencia_watt); 
    printf("Informe o tempo em minutos: ");
    scanf("%f", &tempo_min); 

    //processamento
    tempo_h = tempo_min / 60; //calculo tempo em hora
    kilo = potencia_watt / 1000; //conversao watt para kilo watt
    consumo_kWh = tempo_h * kilo; //consumo
    custo = consumo_kWh * 0.5; //valor a ser pago

    //saida
    printf("Para um equipamento de pot�ncia %.0f W e tempo de uso de %.0f minutos, o consumo total ser� de %.1f kWh e o custo de R$ %.2f.", potencia_watt, tempo_min, consumo_kWh, custo);
    
    return 0; 
}