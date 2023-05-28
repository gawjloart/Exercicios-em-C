//Atividade 2

#include <stdio.h>

int main(){

    int quantidade, i, numero, soma=0;
    float media; 

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &quantidade);

    for(i = 1; i <= quantidade; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        soma += numero;
}

    media = (float) soma / quantidade;

    printf("A soma dos numeros digitados são: %d\n", soma);
    printf("A media dos numeros digitados são: %f\n", media);

    return 0;
}
