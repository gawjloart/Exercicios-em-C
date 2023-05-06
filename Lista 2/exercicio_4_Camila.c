// 4) Calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso contrário.

#include <stdio.h>

int main(void){ 
    float n1, n2, n3, media;
    char nome[45];

    printf("Atividade numero 4");
    printf("Nome do aluno: ");
    scanf("%s", &nome);

    printf("Primeira nota: ");
    scanf("%f", &n1);

    printf("Segunda nota: ");
    scanf("%f", &n2);

    printf("Terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/2;

    if(media >= 6){
        printf("Aluno %s\n", nome);
        printf("Nota: %.2f\n", media);
        printf("Resultado: Aprovado\n");
    }
    else {
        printf("Aluno %s\n", nome);
        printf("Nota: %.2f\n", media);
        printf("Resultado: Reprovado\n");
    }

}