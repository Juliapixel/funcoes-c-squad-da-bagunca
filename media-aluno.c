#include <stdio.h>

float calcularMedia(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}

void exibirResultado(float media)
{
    if (media >= 6)
    {
        printf("Parabéns! Você passou ");
    }
    else if (media < 6)
    {
        printf("Parabéns! Você reprovou :) ");
    }
}

void boasVindas(char nome[])
{
    printf("Boas vindas %s\n", nome);
}

int main()
{
    float nota1;
    float nota2;
    float nota3;
    char nome[410];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    boasVindas(nome);
    printf("Digite sua nota 1: ");
    scanf("%f", &nota1);
    printf("Digite sua nota 2: ");
    scanf("%f", &nota2);
    printf("Digite sua nota 3: ");
    scanf("%f", &nota3);

    float media = calcularMedia(nota1, nota2, nota3);
    exibirResultado(media);
}
