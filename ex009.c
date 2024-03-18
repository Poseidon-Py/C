#include <stdio.h>
#include <locale.h>

/*
Faça um programa em linguagem C que peça a idade do usuário e apresente seu 
provável ano de nascimento.
*/

//desse jeito ou pode usar biblioteca time.h e as funcoes de ano tm.tm_year (mais complicado, mas utiliza ano do sistema)

int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade, ano_atual;
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    int ano_nasc = ano_atual - idade;
    printf("O ano é %d e você provavelmente nasceu em %d.", ano_atual, ano_nasc);

    return 0;
}