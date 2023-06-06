// 5. Escreva um programa que exiba a tabela de multiplicação de 1 a 10 usando um loop for
// Exemplo:     5 x 8 = 40
// Exemplo:     5 x 9 = 45
// Exemplo:     5 x 10 = 50




#include <stdio.h>

int main() {
    int i, j;
    
    printf("Atividade [5] - Vitin \n\n", num);
    printf("Tabela de multiplicacao de 1 ao 10:\n");
    
    for(i = 1; i <= 10; i++) {
        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\t\n", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}
