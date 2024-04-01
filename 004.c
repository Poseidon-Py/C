#include <stdio.h>
#include <locale.h>

/*
Monte um algoritmo que solicite ao usu�rio o tempo decorrido entre dois eventos, que
deve ser dado em segundos. Em seguida, o algoritmo deve calcular quantas horas,
minutos e segundos correspondem a este intervalo de tempo. Para exibi��o dos dados
apresentar o tempo de dura��o em horas, minutos e segundos no formato HH:MM:SS,
em que: HH representa as horas com dois d�gitos, MM expressa os minutos com dois
d�gitos e SS os segundos com dois d�gitos.
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
    printf("%d segundos � equivalente a -> %02d:%02d:%02d", temp, h, m, s);
    
    return 0; 
}