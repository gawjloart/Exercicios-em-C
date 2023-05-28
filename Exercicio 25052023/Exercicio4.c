// atividade 4

#include <stdio.h>

int eh_quadrado_perfeito(int num) {
    // Verificar se o número é negativo
    if (num < 0) {
        return 0;
    }

    // Calcular a raiz quadrada do número
    int raiz = 0;
    while (raiz * raiz <= num) {
        if (raiz * raiz == num) {
            return 1;
        }
        raiz++;
    }

    return 0;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (eh_quadrado_perfeito(numero)) {
        printf("O número é um quadrado perfeito.\n");
    } else {
        printf("O número não é um quadrado perfeito.\n");
    }

    return 0;
}
