// Atividade 5

/*Se o número é um múltiplo de 3 e 5, a palavra "FIZZBUZZ" é impressa.
Se o número é apenas um múltiplo de 3, a palavra "FIZZ" é impressa.
Se o número é apenas um múltiplo de 5, a palavra "BUZZ" é impressa.
se for ao contrário, o numero é impresso*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FIZZBUZZ ");
        } else if (i % 3 == 0) {
            printf("FIZZ ");
        } else if (i % 5 == 0) {
            printf("BUZZ ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}