//Exercicio 3
//Expliquei pois não aprendemos "desse jeitinho"

#include <stdio.h>



// Verificando se um numero é primo
int isPrime(int num) { 
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

//Intervalo escolhido e imprimindo os numeros encontrados dentro do intervalo escolhido:
void findPrimes(int comeco, int fim) {
    printf("Números primos no intervalo de %d a %d:\n", comeco, fim);

    for (int i = comeco; i <= fim; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");
}

//Imprimindo resultados
int main() {
    int comeco, fim;

    printf("Digite o início do intervalo: ");
    scanf("%d", &comeco);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    findPrimes(comeco, fim);

    return 0;
}