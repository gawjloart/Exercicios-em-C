// 1) Escreva um algoritmo que solicite ao usuário que digite três números e imprima na tela o maior valor entre eles.

// Meu github, github.com/sochni/ :)
// Vitin o aluno predileto, pode falar.



#include <stdio.h>

int main() 
{
    int numero1, numero2, numero3=0;

    printf("Atividade numero 1 da Camila <3\nDigite 3 numeros e imprima na tela o maior valor entre eles\nPrimeiro numero:");
    scanf("%d", &numero1);

    printf("Segundo numero:");
    scanf("%d", &numero2);
    
    printf("Terceiro numero:");
    scanf("%d", &numero3);

    if(numero1 > numero2 && numero1 > numero3){
        printf("%d é o maior numero.\n", numero1);
    }
    
    else if(numero2 > numero3)
    {
        printf("%d é o maior numero.\n", numero2);
    }

    else 
    {
        printf("%d é o maior numero.\n", numero3);
    }

}