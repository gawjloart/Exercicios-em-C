// 3) Faça um algoritmo que receba o valor do salário de uma pessoa e o valor de um financiamento pretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o algoritmo deverá escrever "Financiamento Concedido"; senão, ele deverá escrever "Financiamento Negado". A taxa de juros aplicada em fundos depositados em um banco é determinada pelo tempo em que estes ficam depositados. Para um banco em particular, a seguinte tabela é usada:
//Usando esta informação, escreva uma função que receba o tempo em que os fundos foram mantidos em depósito e retorne a taxa de juros correspondente.

// Meu github, github.com/sochni/ :)
// Vitin o aluno predileto, pode falar.
// Acredito que o código esteja incompleto, tive uma duvida nesse exercicio!.

#include <stdio.h>

int main() {
    float salario, financiamento;
    int tempo;
    float taxa_juros;

    printf("Digite o valor do salário: ");
    scanf("%f", &salario);

    printf("Digite o valor do financiamento pretendido: ");
    scanf("%f", &financiamento);

    if (financiamento <= 5*salario) {
        printf("Financiamento Concedido\n");
    }
    else {
        printf("Financiamento Negado\n");
    }

    printf("Digite o tempo em meses que o dinheiro ficará depositado: ");
    scanf("%d", &tempo);

    if (tempo <= 6) {
        taxa_juros = 0.05;
    }
    else if (tempo <= 12) {
        taxa_juros = 0.1;
    }
    else if (tempo <= 24) {
        taxa_juros = 0.15;
    }
    else if (tempo <= 48) {
        taxa_juros = 0.2;
    }
        else if (tempo <= 60) {
        taxa_juros = 0.25;
    }
    else {
        taxa_juros = 0.3;
    }

    printf("A taxa de juros aplicada será de %.2f%% ao mês.\n", taxa_juros*100);

    return 0;
}