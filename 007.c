#include <stdio.h>
#include <locale.h>

/*
Um lojista deseja saber qual é a margem de lucro (percentual) obtida com a venda de
um produto. Faça um algoritmo para calcular a margem de lucro de um produto ao
serem fornecidos o custo do produto e o preço de venda do produto. Para o cálculo da
margem de lucro, deve-se primeiro obter o preço de venda e descontar do custo do
produto. Na sequência, o resultado obtido é dividido pelo preço de venda do produto
e, então multiplicado por 100. Exiba o percentual na tela com duas casas após a
vírgula. Faça a utilização de variável auxiliar para a resolução do problema.
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
    printf("Com o custo do produto a R$%.2f e o preço de venda a R$%.2f, a margem de lucro em porcentagem é equivalente a %.2f%%", custo, venda, auxiliar);

    return 0; 
}