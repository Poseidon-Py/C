#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
Construa um algoritmo para calcular o quadrado e o cubo de um n�mero inteiro
fornecido pelo usu�rio: ??2 ?? ??3. A resposta dos c�lculos dever� ser apresentada ao
usu�rio
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    int n1, quadrado, cubo;

    //entrada
    printf("Informe o n�mero desejado: ");
    scanf("%d", &n1);

    //processamento
    quadrado = pow(n1, 2);
    cubo = pow(n1, 3);

    //saida
    printf("O quadrado e o cubo do n�mero %d s�o respectivamente: %d e %d.", n1, quadrado, cubo);

    return 0; 
}