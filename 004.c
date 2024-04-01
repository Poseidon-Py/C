#include <stdio.h>
#include <locale.h>

/*
Monte um algoritmo que solicite ao usuário o tempo decorrido entre dois eventos, que
deve ser dado em segundos. Em seguida, o algoritmo deve calcular quantas horas,
minutos e segundos correspondem a este intervalo de tempo. Para exibição dos dados
apresentar o tempo de duração em horas, minutos e segundos no formato HH:MM:SS,
em que: HH representa as horas com dois dígitos, MM expressa os minutos com dois
dígitos e SS os segundos com dois dígitos.
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    int temp, h, m, s;
    int h_res;

    //entrada
    printf("Informe o tempo decorrido entre dois eventos em segundos: ");
    scanf("%d", &temp);

    //processamento
    h = temp / 3600; //tempo horas
    h_res = temp % 3600; //segundos restantes
    m = h_res / 60; //tempo minutos
    s = h_res % 60; //tempo segundos

    //saida
    printf("%d segundos é equivalente a -> %02d:%02d:%02d", temp, h, m, s);
    
    return 0; 
}