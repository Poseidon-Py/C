#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Faça um programa em linguagem C que peça o ano de nascimento do usuário e 
apresente sua provável idade
*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int ano_nasc;
    
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    
    printf("Informe seu ano de nascimento: \n");
    scanf("%d", &ano_nasc);

    int idade = (tm.tm_year + 1900) - ano_nasc;
    printf("O ano atual é %d e você tem %d anos.", tm.tm_year + 1900, idade);

    return 0;
}

