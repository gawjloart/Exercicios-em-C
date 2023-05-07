// 5) Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo. 
// Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário. 
// Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.

// Meu github, github.com/sochni/ :)
// Vitin o aluno predileto, pode falar.

#include <stdio.h>

int main(void)
{
    int codigo;
    float salario, salario_novo, salario_aumento;

    printf("Codigo do cargo: ");
    scanf("%d", &codigo);
    printf("Salario atual: ");
    scanf("%f", &salario);

    if(codigo == 101){
        salario_aumento = salario * 0.10;
        }
    else if(codigo == 102){
        salario_aumento = salario * 0.20;
        }
    else if(codigo == 103){
        salario_aumento = salario * 0.30;
        }
    else {
        printf("\n\n\n\n.: - Codigo não existe - :.\n\n\n\n");
    }

    salario_novo = salario_aumento + salario;

    printf("Salario atual: R$ %10.2f\n", salario);
    printf("Teve um aumento de: R$ %10.2f\n", salario_aumento);
    printf("Novo salario: R$ %10.2f\n", salario_novo);

}
