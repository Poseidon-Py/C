#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
Uma progressão geométrica (PG) é classificada como uma sequência numérica em
que cada termo é igual a multiplicação do termo antecessor com uma constante
chamada razão da PG. A fórmula para calcular o termo geral da PG esta descrita a
seguir: ???? = ??1 ? ??^???1 em que, ?? é o índice do termo que queremos determinar, ??1é o primeiro termo da
progressão e ?? é a razão da PG. Faça um algoritmo em linguagem C que seja capaz
de determinar qualquer termo de uma PG. O usuário deverá informar o primeiro
termo, a razão e o N-ésimo termo desejado.
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    int primeiro_termo, razao, n_esimo, PG;

    //entrada
    printf("Informe o primeiro termo da PG: ");
    scanf("%d", &primeiro_termo);  
    printf("Informe a razão da PG: ");
    scanf("%d", &razao); 
    printf("Informe o N-ésimo número desejado: ");
    scanf("%d", &n_esimo);  

    //processamento
    PG = primeiro_termo * pow(razao, n_esimo - 1);

    //saida
    printf("Com o primeiro termo da PG sendo %d, a razão sendo %d e o valor do N-ésimo termo sendo %d, então o %d° termo da progressão será %d", primeiro_termo, razao, n_esimo, n_esimo, PG);
    
    return 0; 
}