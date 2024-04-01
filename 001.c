#include <stdio.h>
#include <locale.h>

/*
Construa um algoritmo para calcular o quadrado da soma de dois números inteiros
fornecidos pelo usuário: (?? + ??)
2
*/
int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    int n1, n2, quadrado_soma;

    //entrada
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    //processamento
    quadrado_soma = (n1 + n2) * (n1 + n2);

    //saida
    printf("O quadrado da soma entre %d e %d é %d", n1, n2, quadrado_soma);

    return 0; 
}