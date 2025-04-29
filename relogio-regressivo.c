#include <stdio.h>
#include <windows.h>

void contagemRegressiva(int inicio);
int main()
{
    int numero;
    printf("\nDigite algum número para dar início a contagem regressiva:");
    scanf("%d", &numero);
    contagemRegressiva(numero);
    return 0;
}
void contagemRegressiva(int inicio)
{
    for (int i = inicio; i >= 0; i--)
    {
        printf("\n%d\n", i);
        Sleep(1000);
    }
    printf("Tempo esgotado!\n");
    printf("Fim da contagem.");
}