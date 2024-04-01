#include <stdio.h>
#include <locale.h>

/*
Elabore um programa em linguagem C para c�lculo do pre�o de venda de um ve�culo
que � composto pelo pre�o da montadora, margem de lucro de 15%, IPI de 11% e
ICMS de 17%. As porcentagens s�o aplicadas sobre o pre�o da montadora. Apresente
o pre�o de venda, o valor do lucro, o valor correspondente ao IPI e ao ICMS.
Para teste do algoritmo utilize o seguinte caso de teste: 
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    float valor_montagem, lucro, ipi, icms, venda;

    //entrada
    printf("Informe o valor de montagem: ");
    scanf("%f", &valor_montagem);   

    //processamento
    lucro = valor_montagem * 0.15;
    ipi = valor_montagem * 0.11;
    icms = valor_montagem * 0.17;
    venda = valor_montagem + lucro + ipi + icms;

    //saida
    printf("\nValor de venda: %.2f", venda);
    printf("\nValor do lucro: %.2f", lucro);
    printf("\nValor do IPI: %.2f", ipi);
    printf("\nValor do ICMS: %.2f", icms);
    
    
    return 0; 
}