#include <stdio.h>
#include <locale.h>

/*
Monte um algoritmo que solicite ao usuário a velocidade em metros por segundo (m/s)
e informe a velocidade correspondente em quilômetros por hora (km/h).
*/

int main() 
{
    setlocale(LC_ALL, "");

    //declaracao de variaveis
    float m_S, km_h;

    //entrada
    printf("Informe a velocidade em (m/s): ");
    scanf("%f", &m_S);  

    //processamento
    km_h = m_S * 3.6;

    //saida
    printf("A velocidade de %.1f m/s é correspondente a %.1f km/h", m_S, km_h);
    
    return 0; 
}