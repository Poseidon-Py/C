#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
Construa um algoritmo para calcular o quadrado e o cubo de um número inteiro
fornecido pelo usuário: ??2 ?? ??3. A resposta dos cálculos deverá ser apresentada ao
usuário
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    int n1, quadrado, cubo;

    //entrada
    printf("Informe o número desejado: ");
    scanf("%d", &n1);

    //processamento
    quadrado = pow(n1, 2);
    cubo = pow(n1, 3);

    //saida
    printf("O quadrado e o cubo do número %d são respectivamente: %d e %d.", n1, quadrado, cubo);

    return 0; 
}