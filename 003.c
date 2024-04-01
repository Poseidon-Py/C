#include <stdio.h>
#include <locale.h>

/*
Construa algoritmo para calcular a m�dia ponderada de tr�s notas de um aluno
considerando os pesos 2, 3 e 5, respectivamente, para a nota 1, nota 2 e nota 3. Exibir
na tela a m�dia com duas casas ap�s a v�rgula.
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    float n1, n2, n3, media_pond;

    //entrada
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);

    //processamento
    media_pond = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    //saida
    printf("A m�dia ponderada das notas foi de %.2f", media_pond);
    
    return 0; 
}