#include <stdio.h>
#include <locale.h>

/*
Um lojista deseja saber qual � a margem de lucro (percentual) obtida com a venda de
um produto. Fa�a um algoritmo para calcular a margem de lucro de um produto ao
serem fornecidos o custo do produto e o pre�o de venda do produto. Para o c�lculo da
margem de lucro, deve-se primeiro obter o pre�o de venda e descontar do custo do
produto. Na sequ�ncia, o resultado obtido � dividido pelo pre�o de venda do produto
e, ent�o multiplicado por 100. Exiba o percentual na tela com duas casas ap�s a
v�rgula. Fa�a a utiliza��o de vari�vel auxiliar para a resolu��o do problema.
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    float margem_lucro, custo, venda, auxiliar;

    //entrada
    printf("Informe o custo do produto: ");
    scanf("%f", &custo);  
    printf("Informe o valor de venda do produto: ");
    scanf("%f", &venda);  

    //processamento
    margem_lucro = venda - custo;
    auxiliar = margem_lucro / venda * 100;

    //saida
    printf("Com o custo do produto a R$%.2f e o pre�o de venda a R$%.2f, a margem de lucro em porcentagem � equivalente a %.2f%%", custo, venda, auxiliar);

    return 0; 
}