#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
Uma progress�o geom�trica (PG) � classificada como uma sequ�ncia num�rica em
que cada termo � igual a multiplica��o do termo antecessor com uma constante
chamada raz�o da PG. A f�rmula para calcular o termo geral da PG esta descrita a
seguir: ???? = ??1 ? ??^???1 em que, ?? � o �ndice do termo que queremos determinar, ??1� o primeiro termo da
progress�o e ?? � a raz�o da PG. Fa�a um algoritmo em linguagem C que seja capaz
de determinar qualquer termo de uma PG. O usu�rio dever� informar o primeiro
termo, a raz�o e o N-�simo termo desejado.
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    int primeiro_termo, razao, n_esimo, PG;

    //entrada
    printf("Informe o primeiro termo da PG: ");
    scanf("%d", &primeiro_termo);  
    printf("Informe a raz�o da PG: ");
    scanf("%d", &razao); 
    printf("Informe o N-�simo n�mero desejado: ");
    scanf("%d", &n_esimo);  

    //processamento
    PG = primeiro_termo * pow(razao, n_esimo - 1);

    //saida
    printf("Com o primeiro termo da PG sendo %d, a raz�o sendo %d e o valor do N-�simo termo sendo %d, ent�o o %d� termo da progress�o ser� %d", primeiro_termo, razao, n_esimo, n_esimo, PG);
    
    return 0; 
}