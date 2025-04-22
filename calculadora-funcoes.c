#include <stdio.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);

int receber_valor() {
    int val;

    printf("Digite um valor: ");
    scanf("%d", &val);
    return val;
}

int main(int argc, char const *argv[]) {
    char escolha;

    printf("Escolha a operação (+, -, * ou /): ");
    scanf("%c", &escolha);
    int a = receber_valor();
    int b = receber_valor();

    switch (escolha) {
        case '+':
            printf("Resultado: %d\n", somar(a, b));
            break;
        case '-':
            printf("Resultado: %d\n", subtrair(a, b));
            break;
        case '*':
            printf("Resultado: %d\n", multiplicar(a, b));
            break;
        case '/':
            if (b == 0) {
                printf("Não é possível realizar divisão por 0");
                return 1;
            }
            printf("Resultado: %d\n", dividir(a, b));
            break;
    }
    return 0;
}

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}
