// 3. Escreva um programa que imprima os primeiros 10 números da sequência de Fibonacci usando um loop for
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, … é conhecida por Sequência de Fibonacci.


#include <stdio.h>

int main() {
    int n = 25;
    int fibonacci1 = 0, fibonacci2 = 1, fibonacci3;
    
    printf("Atividade [3] - Victor Adrelli \n", n);
    printf("Os primeiros numeros da sequencia são: \n", n);
    
    printf("%d ", fibonacci1);
    printf("%d ", fibonacci2);
    
    for (int i = 3; i <= n; i++) {
        fibonacci3 = fibonacci1 + fibonacci2;
        printf("%d ", fibonacci3);
        
        fibonacci1 = fibonacci2;
        fibonacci2 = fibonacci3;
    }
    
    printf("\n");
    
    return 0;
}