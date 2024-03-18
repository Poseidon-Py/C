#include <locale.h>
#include <stdio.h>
#include <windows.h>

/*
 Faça um programa em linguagem C que peça o nome completo do usuário, depois 
a idade do usuário e, em seguida, digite a mensagem: “Legal, <nome do usuário>! 
Você tem <idade> anos!”. Observação: substitua <nome do usuário> pelo nome 
digitado pelo usuário e <idade>, pela idade informada pelo usuário.
*/

int main() 
{ 
    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[35];
    printf("Informe o seu nome completo: \n");
    scanf("%35[^\n]", nome);

    int idade;
    printf("Agora informe a sua idade atual: \n");
    scanf("%d", &idade);

    printf("Legal, %s! Voc� tem %d anos!", nome, idade);

    return 0;
}