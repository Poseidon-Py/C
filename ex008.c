#include <stdio.h>
#include <locale.h>

/*
Implemente um programa em linguagem C que calcule a m�dia final de um aluno 
em uma disciplina da faculdade. O aluno dever� informar 4 notas referentes as 
avalia��es do semestre e a nota das atividades no geral (apenas uma entrada). Para 
fazer o c�lculo da m�dia considere que todas as notas foram avaliadas entre 0 a 
10 pontos e utilize a seguinte f�rmula: MF = ((P1+P2+P3+P4)/4)*0.8 + ATV*0.2. 
Imprima na tela a m�dia final da disciplina para o aluno.
*/

int main() 
{
    setlocale(LC_ALL, "");
    float n1, n2, n3, n4, n_ATV;
  
    printf("Informe sua primeira nota: \n");
    scanf("%f", &n1);

    printf("Informe sua segunda nota: \n");
    scanf("%f", &n2);
    
    printf("Informe sua terceira nota: \n");
    scanf("%f", &n3); 
    
    printf("Informe sua quarta nota: \n");
    scanf("%f", &n4);
    
    printf("Informe a sua nota das atividades [nota geral]: \n");
    scanf("%f", &n_ATV);

    float media = (((n1 + n2 + n3 + n4) / 4) * 0.8) + (n_ATV * 0.2);
    printf("Sua m�dia final na disciplina foi %.1f.", media);

    return 0;
}