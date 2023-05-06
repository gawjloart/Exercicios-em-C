// 2) Escreva um algoritmo que solicite ao usuário que digite um número inteiro positivo e imprima na tela se ele é um número primo ou não.?
// Meu github, github.com/sochni/ :)
// Vitin o aluno predileto, pode falar.

#include <stdio.h>

int main(){

    int numero, inteiro, flag = 0;

    printf("Atividade numero 2 da Camila :)\nDigite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for(inteiro = 2; inteiro <= numero / 2; ++inteiro)
    {
        if(numero % inteiro == 0) {
            flag=1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d é um numero primo.", numero);
    }
    else 
    {
        printf("%d não é um numero primo.", numero);
    }

        return 0;
}