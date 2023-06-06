// 1. Faça um programa que verifique se um número fornecido pelo usuário é um palíndromo usando um loop while



#include <stdio.h>

int main() {
    
    int num, temp, resto, reverso = 0;

    printf("Atividade [1] - Vitin\n\n");
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    temp = num;
    
    while (temp != 0) {
        resto = temp % 10;
        reverso = reverso * 10 + resto;
        temp /= 10;
    }
    
    if (reverso == num) {
        printf("%d e um palindromo.\n", num);
    } else {
        printf("%d nao e um palidromo.\n", num);
    }
    
    
    return 0;
}
