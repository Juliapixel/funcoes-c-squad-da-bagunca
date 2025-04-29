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
    while (1) {
        char escolha;

        printf("Escolha a operação (+, -, * ou /) ou \"s\" para sair: ");
        scanf(" %c", &escolha);
        int a, b;

        switch (escolha) {
            case '+':
                a = receber_valor();
                b = receber_valor();
                printf("Resultado: %d\n", somar(a, b));
                break;
            case '-':
                a = receber_valor();
                b = receber_valor();
                printf("Resultado: %d\n", subtrair(a, b));
                break;
            case '*':
                a = receber_valor();
                b = receber_valor();
                printf("Resultado: %d\n", multiplicar(a, b));
                break;
            case '/':
                a = receber_valor();
                b = receber_valor();
                if (b == 0) {
                    printf("Não é possível realizar divisão por 0\n");
                    break;
                }
                printf("Resultado: %d\n", dividir(a, b));
                break;
            case 's':
                return 0;
            default:
                printf("Escolha uma opção válida\n");
                break;
        }
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
