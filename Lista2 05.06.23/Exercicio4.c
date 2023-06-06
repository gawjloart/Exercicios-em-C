// 4. Imprima a sequência de números de 1 a 20, pulando de 2 em 2, usando um loop do-while.



#include <stdio.h>

int main() {
    int num = 1;
    
    printf("Atividade [4] - Victor Adrelli \n\n", num);
    printf("A sequencia dos numeros 1 a 20, pulando 2 em 2 e: \n");
    printf("-------------------------------------------------\n");
    
    do {
        printf("%d ",num);
        num += 2;
    }  while (num <= 31);

    printf("\n");
    
    return 0;
}